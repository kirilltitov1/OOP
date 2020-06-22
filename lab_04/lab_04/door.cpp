#include "door.h"


Door::Door()
{
    state = CLOSE;
    QObject::connect(this, SIGNAL(OpenDoor()), this, SLOT(slotOpening()));
    QObject::connect(&timerOpen, SIGNAL(timeout()), this, SLOT(slotOpen()));
    QObject::connect(&timerClose, SIGNAL(timeout()), this, SLOT(slotClose()));
    QObject::connect(&timerWaitOpen, SIGNAL(timeout()), this, SLOT(slotClosing()));
}

void Door::slotOpen()
{
    if(state == OPENING) {
        state = OPEN;
        qDebug() << "doors opened";
        timerWaitOpen.start(TIME_DOOR_WAIT);
        emit OpenDoor();
    }
}

void Door::slotClose()
{
    if(state == CLOSING) {
        state = CLOSE;
        qDebug() << "doors closed";
        emit DoorIsClosed();
    }
}

void Door::slotOpening()
{
    if(state == CLOSE) {
        state = OPENING;
        qDebug() << "doors opening";
        timerOpen.start(TIME_DOOR);
    }
    if(state == CLOSING) {
        state = OPENING;
        qDebug() << "doors opening";
        int t = timerClose.remainingTime();
        timerClose.stop();
        timerOpen.start(TIME_DOOR - t);
    }
}
void Door::slotClosing()
{
    if(state == OPEN) {
        state = CLOSING;
        qDebug() << "doors are closing";
        timerClose.start(TIME_DOOR);
    }
}

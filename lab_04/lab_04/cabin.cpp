#include "cabin.h"

Cabin::Cabin(QObject *parent)
{
    state = FREE;
    currentFloor = 0;
    targetFloor = 0;
    direct = NO_DIRECTION;
    QObject::connect(&door, SIGNAL(DoorIsClosed()), this, SLOT(slotMoving()));
    QObject::connect(&timerMoveFloor, SIGNAL(timeout()), this, SLOT(slotEndMove()));
    QObject::connect(this, SIGNAL(FloorAchieved()), this, SLOT(slotFree()));
    QObject::connect(this, SIGNAL(Move()), this, SLOT(slotMoving()));
    QObject::connect(this, SIGNAL(signalFree()), this, SLOT(slotFree()));
    QObject::connect(this, SIGNAL(signalBusy(int)), this, SLOT(slotBusy(int)));
}

void Cabin::slotMoving()
{
    if (state == BUSY)
    {
        state = MOVING;
        if (currentFloor == targetFloor)
        {
            emit FloorAchieved();
        }
        else
        {
            timerMoveFloor.start(TIME_MOVING_FLOOR);
        }
    }
    else if (state == MOVING)
    {
        qDebug() << "move, floor" << currentFloor;
        if (currentFloor < targetFloor)
        {
            direct = UP;
            currentFloor += 1;
        }
        else
        {
            direct = DOWN;
            currentFloor -= 1;
        }
        if (currentFloor == targetFloor)
        {
            emit FloorAchieved();
        }
        else
        {
            timerMoveFloor.start(TIME_MOVING_FLOOR);
        }
    }
}

void Cabin::slotEndMove()
{
    emit FloorVisited(currentFloor, direct);
}

void Cabin::slotFree()
{
    if(state == FREE)
    {
        emit FloorTargetAchieved(currentFloor, direct);
    } else if(state == MOVING)
    {
        state = FREE;
        emit signalFree();
    }
}

void Cabin::slotBusy(int floor)
{
//    qDebug() << "slotBusy";
    if (state == BUSY)
    {
        targetFloor = floor;
        if(currentFloor == targetFloor) {
            emit FloorAchieved();
        }
        else
        {
            if(currentFloor < targetFloor) {
                direct = UP;
            }
            else {
                direct = DOWN;
            }
            emit Move();
        }
    } else if (state == FREE)
    {
        state = BUSY;
        emit signalBusy(floor);
    }
}

#include "button.h"


Button::Button(QWidget *parent) : QPushButton(parent)
{
    state = RELEASED;
    floorNumber = 0;
    QObject::connect(this, SIGNAL(clicked()), this, SLOT(slotPressed()));
    QObject::connect(this, SIGNAL(resetButton()), this, SLOT(slotReleased()));

}

void Button::SetNumberFloor(int floor)
{
    floorNumber = floor;
}

Button::~Button()
{

}

void Button::slotPressed()
{
    if(state == RELEASED) {
        //qDebug() << "press" << floorNumber;
        state = PRESSED;
        emit floorRequest(floorNumber);
    }
}

void Button::slotReleased() {
    if(state == PRESSED) {
        state = RELEASED;
    }
}

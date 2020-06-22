#include "lift.h"

Lift::Lift(QObject *parent) : QObject(parent)
{
    QObject::connect(&cabina,  SIGNAL(FloorVisited(int, Direction)), &control, SLOT(slotChangeCurrentFloor(int, Direction)));
    QObject::connect(&cabina,  SIGNAL(FloorTargetAchieved(int, Direction)), &control, SLOT(slotAchieveFloor(int, Direction)));
    QObject::connect(&control, SIGNAL(SendTarget(int)), &cabina,  SLOT(slotBusy(int)));
}

QWidget *Lift::GetWidget()
{
    return &control;
}

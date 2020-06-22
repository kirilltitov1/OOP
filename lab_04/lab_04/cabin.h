#ifndef CCABIN_H
#define CCABIN_H

#include <QObject>
#include "door.h"
#include "times.h"

enum Direction {
    UP = 1,
    DOWN = -1,
    NO_DIRECTION = 0
};

class Cabin : public QObject
{
    Q_OBJECT
    enum StateCabin {
        MOVING,
        BUSY,
        FREE
    };

public:
    explicit Cabin(QObject *parent = 0);


signals:

    void FloorVisited(int floor, Direction d);
    void FloorTargetAchieved(int floor, Direction d);
    void signalFree();
    void signalBusy(int floor);

public slots:

    void slotMoving();
    void slotFree();
    void slotBusy(int floor);
    void slotEndMove();

private:

    int       currentFloor = 0;
    int       targetFloor;
    Direction direct;
    StateCabin state;
    Door     door;
    QTimer    timerMoveFloor;

signals:

    void FloorAchieved();
    void Move();

};

#endif // CCABIN_H

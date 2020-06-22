#ifndef CCONTROLLER_H
#define CCONTROLLER_H

#include <QObject>
#include <QWidget>
#include <QVBoxLayout>
#include "button.h"
#include "times.h"
#include "cabin.h"
#include "door.h"

class Controller : public QWidget
{
    Q_OBJECT
    enum StateController {
        NO_TARGET,
        BUSY
    };

public:

    explicit Controller(QWidget *parent = 0);
    ~Controller();

signals:

    void SendTarget(int floor);// { qDebug() << "he;;p"; }

public slots:

    void slotChangeCurrentFloor(int floor, Direction d);
    void slotAchieveFloor(int floor, Direction d);

private slots:

    void slotAddNewFloor(int floor);

private:

    bool GetNewTarget(int &newFloor);

    bool         targetArray[FLOOR_NUMBERS];
    Button*     buttons[FLOOR_NUMBERS];
    int          currentFloor;
    Direction    direct;
    QVBoxLayout* layout;
    StateController state;

    Door     door;

};

#endif // CCONTROLLER_H

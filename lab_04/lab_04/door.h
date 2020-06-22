#ifndef CDOOR_H
#define CDOOR_H

#include <QObject>
#include "times.h"

class Door : public QObject
{
    Q_OBJECT
    enum StateDoor {
        OPEN,
        CLOSE,
        OPENING,
        CLOSING
    };

public:

    explicit Door();

signals:

    void DoorIsClosed();
    void OpenDoor();

public slots:

    void slotOpen();
    void slotClose();

private slots:

    void slotOpening();
    void slotClosing();

private:

    StateDoor state;
    QTimer timerOpen;
    QTimer timerClose;
    QTimer timerWaitOpen;
};

#endif // CDOOR_H

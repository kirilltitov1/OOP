#ifndef CBUTTON_H
#define CBUTTON_H

#include <QPushButton>
#include <QObject>
#include <QDebug>

class Button : public QPushButton
{
    Q_OBJECT
    enum StateButton {
        PRESSED,
        RELEASED
    };
public:
    explicit Button(QWidget *parent = 0);
    void SetNumberFloor(int floor);
    virtual ~Button();

public slots:
    void slotPressed();
    void slotReleased();

signals:
    void resetButton();
    void floorRequest(int floor);

private:
    StateButton state;
    int floorNumber;
};

#endif // CBUTTON_H

#ifndef CLIFT_H
#define CLIFT_H

#include <QObject>
#include "times.h"
#include "controller.h"
#include "cabin.h"

class Lift : public QObject
{
    Q_OBJECT
public:
    explicit Lift(QObject *parent = 0);

    QWidget* GetWidget();

signals:

public slots:

private:
    Controller control;
    Cabin      cabina;
};

#endif // CLIFT_H

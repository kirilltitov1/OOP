#ifndef ENTRY_H
#define ENTRY_H

#include <QGraphicsView>
#include "frame.h"
#include "errors.h"

enum Action
{
    LOAD_FILE,
    MOVE,
    SCALE,
    DRAW,
    TURNX,
    TURNY,
    TURNZ,
    QUIT
};

struct Draw
{
    QGraphicsView *gV;
    int width;
    int heigh;
};

struct Turn
{
    int angle;
};

struct Scale
{
    double sc;
};

struct LoadFile
{
    const char* filename;
};

struct Movement
{
    double x;
    double y;
    double z;
};

struct Args
{
    Action action;
    union
    {
        struct Draw draw;
        struct Turn turn;
        struct Movement move;
        struct Scale scale;
        struct LoadFile lf;
    };
};

int enter(Args args);


#endif // ENTRY_H

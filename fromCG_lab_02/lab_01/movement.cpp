#include "movement.h"

Errors transferPoints(Frame fr, Movement transfer)
{
    for (int i = 0; i < fr.points.count; i++)
    {
        fr.points.array_points[i].x += transfer.x;
        fr.points.array_points[i].y += transfer.y;
    }
    return OK;
}

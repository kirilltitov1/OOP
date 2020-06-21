#include "scale.h"

Errors scale(Frame fr, Scale scale)
{
    for (int i = 0; i < fr.points.count; i++)
    {
        fr.points.array_points[i].x *= scale.sc;
        fr.points.array_points[i].y *= scale.sc;
        fr.points.array_points[i].z *= scale.sc;
    }
    return OK;
}

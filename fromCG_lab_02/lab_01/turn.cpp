#include "turn.h"

int turnPoints(Points points, double angle, Point (*turn)(Point point, double angle_radians))
{
    for (int i = 0; i < points.count; i++)
    {
        points.array_points[i] = turn(points.array_points[i], angle);
    }
    return 0;
}

Errors turn(Frame fr, Args args)
{
    double angle_radians = args.turn.angle * M_PI / 180;
    if(args.action == TURNX)
    {
        turnPoints(fr.points, angle_radians, turnX);
    }
    if(args.action == TURNY)
    {
        turnPoints(fr.points, angle_radians, turnY);
    }
    if(args.action == TURNZ)
    {
        turnPoints(fr.points, angle_radians, turnZ);
    }
    return OK;
}

Point turnZ(Point point, double angle_radians)
{
    Point temp_point;
    double cos_angle = cos(angle_radians);
    double sin_angle = sin(angle_radians);

    double x_tmp = point.x * cos_angle + point.y * sin_angle;
    double y_tmp = -point.x * sin_angle + point.y * cos_angle;

    temp_point.x = x_tmp;
    temp_point.y = y_tmp;
    temp_point.z = point.z;

    return temp_point;
}

Point turnX(Point point, double angle_radians)
{
    Point temp_point;

    double cos_angle = cos(angle_radians);
    double sin_angle = sin(angle_radians);

    double y_tmp = point.y * cos_angle + point.z * sin_angle;
    double z_tmp = -point.y * sin_angle + point.z * cos_angle;

    temp_point.y = y_tmp;
    temp_point.z = z_tmp;
    temp_point.x = point.x;

    return temp_point;
}

Point turnY(Point point, double angle_radians)
{
    Point temp_point;
    double cos_angle = cos(angle_radians);
    double sin_angle = sin(angle_radians);

    double x_tmp = point.x * cos_angle - point.z * sin_angle;
    double z_tmp = point.x * sin_angle + point.z * cos_angle;

    temp_point.x = x_tmp;
    temp_point.y = point.y;
    temp_point.z = z_tmp;

    return temp_point;
}

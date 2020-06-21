#ifndef TURN_H
#define TURN_H

#include "entry.h"
#include "errors.h"

Errors turn(Frame fr, Args args);
int turnPoints(Points points, double angle, Point (*turn)(Point point, double angle_radians));
Point turnX(Point point, double angle_radians);
Point turnY(Point point, double angle_radians);
Point turnZ(Point point, double angle_radians);


#endif // TURN_H

#ifndef FIGURE_H
#define FIGURE_H

struct Point
{
    double x;
    double y;
    double z;
};

struct Edge
{
    int begin;
    int end;
};

struct Points
{
    Point* array_points;
    int count;
};

struct Edges
{
    Edge *array_edges;
    int count;
};

#endif // FIGURE_H

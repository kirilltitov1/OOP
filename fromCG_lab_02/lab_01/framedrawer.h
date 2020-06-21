#ifndef FRAMEDRAWER_H
#define FRAMEDRAWER_H

#include "frame.h"
#include "entry.h"
#include "graph.h"

struct FlatPoint
{
    double x;
    double y;
};

struct FlatPoints
{
    FlatPoint* flatPoints;
    int size;
};

Errors drawEdges(Frame frame, Draw draw, Graph g);
Errors drawFrame(Frame frame, Draw draw);
void getEdges(Points points, Edges edges, FlatPoints &ps);
void drawEdge(Graph a, Draw draw, FlatPoint begin, FlatPoint end);
void drawLine(double x1, double x2, double y1, double y2, Graph a);
Errors allocFlatPoints(FlatPoints &ps, int count);
void clearFlatPoints(FlatPoints &points);

#endif // FRAMEDRAWER_H

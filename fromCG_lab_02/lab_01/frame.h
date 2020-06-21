#ifndef FRAME_H
#define FRAME_H

#include "figure.h"
#include <iostream>
#include "errors.h"


struct Frame
{
    Points points;
    Edges edges;
};

Frame &init();
void clear(Frame &fr);
Errors allocEdges(Edges &edges, int count);
Errors allocPoints(Points &points, int count);
void clearPoints(Points &points);
void clearEdges(Edges &edges);

#endif // FRAME_H

#ifndef FILEHELPER_H
#define FILEHELPER_H

#include "frame.h"
#include "entry.h"
#include "errors.h"
#include "figure.h"

Errors readFromFile(Frame &fr, LoadFile file);
Errors readContent(Frame &fr, FILE* file);

Errors readPoints(Points *points, FILE *file);
Errors readEdges(Edges *edges, FILE *file);
Errors readSize(int* count, FILE* file);
Errors readPoint(Point* point, FILE* file);
Errors readEdge(Edge* edge, FILE* file);
Errors readPoints(Point *dots, FILE *file, int num);

#endif // FILEHELPER_H

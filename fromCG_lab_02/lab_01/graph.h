#ifndef GRAPH_H
#define GRAPH_H

#include <QGraphicsView>
#include <QPen>
#include "errors.h"

struct Graph
{
    QGraphicsScene* graphiscScene;
    QPen pen;
};

Errors initGraph(Graph &g, QGraphicsView *gV);
void set(QGraphicsView *gV, Graph &g);
#endif // GRAPH_H

#include "graph.h"

Errors initGraph(Graph &g, QGraphicsView *gV)
{
    g.graphiscScene = new QGraphicsScene(gV);
    if (!g.graphiscScene)
    {
        return MEMORY_ALLOCATION_ERROR;
    }
    g.pen = QPen(Qt::black);
    return OK;
}

void set(QGraphicsView *gV, Graph &g)
{
    delete (gV->scene());
    gV->setScene(g.graphiscScene);
}

#include "framedrawer.h"

Errors drawFrame(Frame frame, Draw draw)
{
    Errors err;
    frame.points.count == 0 ? err = INVALID_FILE_DATA : err = OK;
    if (err != OK)
        return err;

    Graph g;
    err = initGraph(g, draw.gV);
    if (err != OK)
        return err;

    err = drawEdges(frame, draw, g);
    return err;
}

void getEdges(Points points, Edges edges, FlatPoints &ps)
{
    for (int i = 0; i < edges.count; i++)
    {
        int j1 = edges.array_edges[i].begin;
        int j2 = edges.array_edges[i].end;
        ps.flatPoints[i*2] = { points.array_points[j1].x, points.array_points[j1].y };
        ps.flatPoints[i*2+1] = { points.array_points[j2].x, points.array_points[j2].y };
    }
}

void drawEdge(Graph a, Draw draw, FlatPoint begin, FlatPoint end)
{
    begin = {begin.x + draw.width, begin.y + draw.heigh};
    end = {end.x + draw.width, end.y + draw.heigh};
    drawLine(begin.x, begin.y, end.x, end.y, a);
}

void drawLine(double x1, double x2, double y1, double y2, Graph a)
{
    a.graphiscScene->addLine(x1, x2, y1, y2, a.pen);
}

Errors allocFlatPoints(FlatPoints &ps, int count)
{
    ps.size = count;

    ps.flatPoints = (FlatPoint*)calloc(count, sizeof(FlatPoints));
    if (!ps.flatPoints)
    {
        return MEMORY_ALLOCATION_ERROR;
    }
    return OK;
}

void clearFlatPoints(FlatPoints &points)
{
    if (points.flatPoints)
    {
        free(points.flatPoints);
    }
}

Errors drawEdges(Frame frame, Draw draw, Graph g)
{
    Errors err = OK;
    FlatPoints fp;
    err = allocFlatPoints(fp, frame.edges.count * 2);
    if (err == OK)
    {
        getEdges(frame.points, frame.edges, fp);
        for (int i = 0; i < fp.size; i += 2)
            drawEdge(g, draw, fp.flatPoints[i], fp.flatPoints[i+1]);
        clearFlatPoints(fp);
        set(draw.gV, g);
    }
    return err;
}

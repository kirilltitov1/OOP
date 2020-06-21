#include "frame.h"


Frame &init()
{
    static Frame frame;

    frame.points.count = 0;
    frame.points.array_points = nullptr;

    frame.edges.count = 0;
    frame.edges.array_edges = nullptr;

    return frame;
}

void clear(Frame &fr)
{
    fr.points.count = 0;
    if (fr.points.array_points)
    {
        free(fr.points.array_points);
    }

    fr.edges.count = 0;
    if (fr.edges.array_edges)
    {
        free(fr.edges.array_edges);
    }
}

Errors allocEdges(Edges &edges, int count)
{
    edges.count = count;

    edges.array_edges = (Edge*)calloc(count, sizeof(Edge));
    if (!edges.array_edges)
    {
        return MEMORY_ALLOCATION_ERROR;
    }
    return OK;
}

Errors allocPoints(Points &points, int count)
{
    points.count = count;
    points.array_points = (Point*)calloc(count, sizeof(Point));
    if (!points.array_points)
    {
        return MEMORY_ALLOCATION_ERROR;
    }
    return OK;
}

void clearPoints(Points &points)
{
    if (points.array_points)
    {
        free(points.array_points);
    }
}

void clearEdges(Edges &edges)
{
    if (edges.array_edges)
    {
        free(edges.array_edges);
    }
}

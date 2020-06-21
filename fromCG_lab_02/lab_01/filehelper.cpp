#include "filehelper.h"


Errors readFromFile(Frame &fr, LoadFile file)
{
    FILE *f = fopen(file.filename, "r");

    if (!f)
        return OPEN_FILE_ERROR;

    Frame fr_tmp = init();
    Errors err = readContent(fr_tmp, f);

    fclose(f);

    if (!err)
    {
        clear(fr);
        fr = fr_tmp;
    }
    return err;
}

Errors readContent(Frame &fr, FILE *file)
{
    Errors err = readPoints(&fr.points, file);
    if (err == OK)
    {
        err = readEdges(&fr.edges, file);
        if (err != OK)
            clearPoints(fr.points);
    }
    return err;
}

Errors readPoints(Points *dots, FILE *file)
{
    Errors err = OK;
    int count = 0;

    err = readSize(&count, file);

    if (err != OK) return err;

    err = allocPoints(*dots, count);

    if (err)  return err;


    for (int i = 0; i < count && !err; i++)
    {
        if (readPoint(&dots->array_points[i], file))
        {
            err = INVALID_FILE_DATA;
        }
    }
    if (err != OK)
        clearPoints(*dots);
    return err;
}

Errors readSize(int* count, FILE* file)
{
    Errors err = OK;
    char tmp;
    if (fscanf(file, "%d%c", count, &tmp) != 2 || tmp !='\n')
    {
        err = INVALID_FILE_DATA;
    }
    return err;
}
Errors readPoint(Point* point, FILE* file)
{
    char tmp;
    if (fscanf(file, "%lf %lf %lf%c", &(point->x), &(point->y), &(point->z), &tmp) != 4 || tmp != '\n')
    {
        return INVALID_FILE_DATA;
    }
    return OK;
}

Errors readEdge(Edge* edge, FILE* file)
{
    char tmp;
    if (fscanf(file, "%d %d%c", &edge->begin, &edge->end, &tmp) != 3 || tmp != '\n')
    {
        return INVALID_FILE_DATA;
    }
    return OK;
}
Errors readEdges(Edges* edges, FILE *file)
{
    Errors err = OK;
    int count = 0;
    err = readSize(&count, file);
    if (err == OK)
    {
        err = allocEdges(*edges, count);
        if (err)
            return err;
    }
    for (int i = 0; i < count && !err; i++)
    {
        if (readEdge(&edges->array_edges[i], file))
        {
            err = INVALID_FILE_DATA;
        }
    }
    if (err != OK)
        clearEdges(*edges);
    return err;
}

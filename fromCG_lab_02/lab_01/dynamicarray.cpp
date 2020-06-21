#include "dynamicarray.h"


DynamicArray *initDynamicArray(int count, unsigned int size)
{
    DynamicArray *da = (DynamicArray*) malloc(sizeof (DynamicArray));
    da->count = count;
    da->data = calloc(size, count);
    return da;
}

void freeDynamicArray(DynamicArray *da)
{
    if (da != nullptr)
    {
        if (da->data != nullptr)
        {
            free(da->data);
        }
        free(da);
    }
}

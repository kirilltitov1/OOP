#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <malloc.h>


struct DynamicArray
{
    void *data;
    int count;
};

DynamicArray *initDynamicArray(int count, unsigned int size);
void freeDynamicArray(DynamicArray *da);


#endif // DYNAMICARRAY_H

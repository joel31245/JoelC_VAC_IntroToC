#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *points;

    points = (int *) malloc(5* sizeof(int) );
    // pointer = (pointer type) malloc (memory size being reserved);

    free(points);
    // frees up the memory that points was pointing

    return 0;
}

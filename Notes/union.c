#include <stdio.h>

// A union is a user-defined data type that allows storing different data types in the same memory location. It can hold only one of its non-static data members at a time. The size of the union is determined by the size of its largest member. Unions are useful when you want to work with different data types but only need to store one value at a time, which can help save memory.

union Data
{
    int i;        // 4 bytes
    float f;      // 4 bytes
    char str[20]; // 20 bytes
};

// limited amounts of memory will be used --> will only use up the same space so it would call the data and the next time you call the other set of data in the union it would overwrite it so it only takes up the same space.

/*
    Union{
        mapdata,
        trainer,
        pokemon
    }
*/
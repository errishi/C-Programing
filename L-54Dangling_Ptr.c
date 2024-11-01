// Dangling Pointer
#include <stdio.h>
#include <stdlib.h>

int *FunctionDangling()
{
    int a, b, sum;
    a = 23;
    b = 10;
    sum = a + b;
    return &sum;
}

int main()
{
    // Case 1: Deallocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 23;
    ptr[2] = 30;
    ptr[3] = 12;
    free(ptr); // Ptr is now a dangling pointer

    // Case 2: Function returning local variable address
    int *dangPtr = FunctionDangling(); // dangptr is now dangling pointer

    int *danglingPtr3;
    // Case 3: If variable goes out of scope
    {
        int a = 12;

        danglingPtr3 = &a;
    }
    // Here variable goes out of scope which means danglingptr3 is pointing to a location which is freed and hence DanglingPtr3 is now dangling pointer

    return 0;
}
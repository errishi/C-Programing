// Null Pointer

#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 34;
    int *ptr = &a;               //if pointer is uninitialize then it give random value i.e garbage value, so in this case we have to make pointer as NULL pointer.
    int c = 33;
    if (ptr != NULL)
    {
        printf("The value of a is %d\n", *ptr);
    }
    else{
        printf("The pointer is a NULL pointer and can not be dereferenced");
    }
    return 0;
}
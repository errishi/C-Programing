#include <stdio.h>

// ----------------Pointer----------
int main()
{
    printf("Let us learn about pointer\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The value of a is %d\n", *ptra);
    printf("The value of some garbage is %d\n", ptr2);
    printf("The value of a is %d\n", a);
    return 0;
}
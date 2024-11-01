//Void pointer

#include<stdio.h>

int main()
{
    int a = 372;
    float b = 3.4;
    void *ptr;            //void pointer
    ptr = &a;
    printf("The value of a is %d\n",*((int *)ptr));        
    ptr = &b;
    printf("The value of b is %f\n",*((float *)ptr));
    return 0;
}
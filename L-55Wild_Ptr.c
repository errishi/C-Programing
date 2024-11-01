//Wild pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 344;
    int *ptr;            //This is a wlid pointer
    // *ptr = 34;            //This is not good thing to do
    ptr = &a;                //Ptr is no longer a wild pointer
    printf("The value of a is %d\n",*ptr);
    return 0;
}
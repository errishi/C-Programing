//Function call by reference.
#include<stdio.h>
#include<conio.h>

void ChangeValue(int* address)
{
    *address = 354;
}

int main()
{
    int a = 34 ,b = 100;
    printf("The value of a is now %d \n",a);
    ChangeValue(&a);
    printf("The value of a is now %d\n",a);
    return 0;
}
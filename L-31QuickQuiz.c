/*Write a program to given to number a and b , add them then subtract them and assign them to a and b using call by reference.*/

#include <stdio.h>
#include <conio.h>

int a, b;
int AddSub(int* a, int* b)
{
    *a = *a + *b;
    *b = *a - *b;
    return 0;
}

int main()
{
    int num1 = 5, num2 = 8, s;
    printf("a = %d\n", num1);
    printf("b = %d\n", num2);
    AddSub(&num1, &num2);
    printf("a = %d\n",num1);
    printf("b = %d\n",num2);
    return 0;
}
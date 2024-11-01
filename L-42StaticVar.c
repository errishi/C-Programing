#include<stdio.h>
#include<conio.h>

int b =98;           //this is a global variable which is declared out of the main .
int func1(int b1)
{
    static int myvar;
    printf("The value of myvar is %d\n",myvar);
    myvar++;
    // printf("The address of b inside func1 is %d\n",&b);
    // printf("The value of b is %d\n",b);
    return b1*myvar;
}

int main()
{
    int b = 344;     // This is local variable ehich is declared inside the main.
    // printf("The address of b inside main is %d\n",&b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d\n",val);
    return 0;
}
//Function pointer

#include<stdio.h>
#include<conio.h>

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    printf("The sum of 1 and 2 is %d\n",sum(1,2));           //testing function
    int (*fPtr)(int , int);        //Declaring function pointer
    fPtr = &sum;       //Creating Function pointer 
    int d = (*fPtr)(4,6);         //Dereferencing function pointer
    printf("The value of d is %d\n",d);
    return 0;
}
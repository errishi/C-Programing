#include<stdio.h>
// write a program to find simple intrest.
int main()
{
    float p , r , t,g;
    printf("Enter Principle amount:\n");
    scanf("%f", &p);
    printf("Enter Rate:\n");
    scanf("%f", &r);
    printf("Enter Time:\n");
    scanf("%f", &t);
    g = (p * r * t) / 100;
    printf("SI is Rs %f",g);
    return 0;
}

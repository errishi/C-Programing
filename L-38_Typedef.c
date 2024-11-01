#include<stdio.h>

typedef struct student
{
    int id;
    int marks;
    char name[54];
}strd;

int main()
{
    strd s1,s2;
    s1.id = 32;
    s2.id = 10;
    printf("Value of s1's id is %d\n",s1.id);
    printf("Value of s2's id is %d\n",s2.id);

    /*typedef unsigned long ul;           // use to give another name of variable.
    typedef int integer;           // use to give another name of variable.
    integer a = 45;
    printf("Value of a is %d",a);
    ul l1,l2,l3;*/
    return 0;
}
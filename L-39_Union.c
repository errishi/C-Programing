#include<stdio.h>
#include<string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
};

int main()
{
    union student s1;
    strcpy(s1.name,"Rishi");
    s1.fav_char = 'R';
    s1.marks= 100;
    s1.id = 1;                                     //it show its values rest all are crupted.
    printf("This id's is %d\n",s1.id);
    printf("This marks is %d\n",s1.marks);
    printf("This fav_char is %c\n",s1.fav_char);
    printf("This name is %s\n",s1.name);
}
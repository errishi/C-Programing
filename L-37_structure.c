/*Structure in C*/

#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    float marks;
    char fav_char;
    char name[34];
}Rishu , Ajay , Komal;


//struct student Rishu , Ajay , Komal;    //It behaive as global variable.

int main()
{
    // struct student Rishu , Ajay , Komal;    //It behaive as local variable.
    Rishu.id = 1;
    Ajay.id = 2;
    Komal.id = 3;
    Rishu.marks = 500;
    Ajay.marks = 440;
    Komal.marks = 380;
    Rishu.fav_char = 'R';
    Ajay.fav_char = 'A';
    Komal.fav_char = 'K';
    strcpy(Rishu.name , "Rishikesh Singh");
    strcpy(Ajay.name , "Ajay Devgan");
    strcpy(Komal.name , "Komal Kumar");
    printf("%s id is %d\n",Rishu.name,Rishu.id);
    printf("Rishikesh got %0.0f marks\n",Rishu.marks);
    printf("%s id is %d\n",Ajay.name,Ajay.id);
    printf("Ajay got %0.0f marks\n",Ajay.marks);
    printf("%s id is %d\n",Komal.name,Komal.id);
    printf("Komal got %0.0f marks\n",Komal.marks);
    printf("Rishu's name is %s\n",Rishu.name);
    printf("Ajay's name is %s\n",Ajay.name);
    printf("Komal's name is %s\n",Komal.name);
    return 0;
}
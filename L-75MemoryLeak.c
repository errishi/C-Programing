#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,i=0;
    int *i2;
    while (i<454454)
    {
        printf("Welcome to my coding club\n");
        i2 = malloc(34444*sizeof(int));
        if(i%100 == 0)
        {
            getchar();
        }
        i++;
        free(i2);   //without this we will encounter ther situation of memory leak
    }
    return 0;
}
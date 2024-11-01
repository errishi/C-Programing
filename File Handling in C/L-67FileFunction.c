// Uses of fgetc,fgets,fputc,fputs.

#include <stdio.h>

int main()
{
    FILE *myF = NULL;
    // myF = fopen("first.txt", "r");

    /*char c = fgetc(myF);
    printf("The character I read \n%c",c);
    c = fgetc(myF);
    printf("\nThe character I read \n%c",c);*/

    /*char str[45];
    fgets(str, 6, myF);
    printf("The string is %s\n",str);*/

    myF = fopen("File2.txt","a+");
    fputc('R',myF);
    fputs("\nThis is Rishikesh Singh",myF);
    
    fclose(myF);
    return 0;
}
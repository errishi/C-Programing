/*String Function in library*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char s1[] = "Rishikesh";
    char s2[] = "singh";
    char s3[54];

    // puts(strcat(s1,s2));
    printf("The length of string s1 is %d\n",strlen(s1));
    printf("The length of string s2 is %d\n",strlen(s2));
    printf("The reverse of string s1 is \n");
    puts(strrev(s1));
    printf("The reverse of string s2 is \n");
    puts(strrev(s2));

    strcpy(s3,strcat(s1,s2));
    puts(s3);
    
    return 0;
}
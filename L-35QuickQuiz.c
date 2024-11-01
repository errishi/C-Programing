/*Write a program to allow user to enter two strings and concatenate them to saying that str1 is a friend of str2.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char string1[50] , string2[50] , string3[150] , st[] = " is a friend of ";
    printf("Enter your name:");
    scanf(string1);
    printf("Enter other name:");
    scanf(string2);
    printf("%s is friend of %s",string1,string2);
    puts(string3);
    return 0;
}
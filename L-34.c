#include <stdio.h>
#include <conio.h>

void PrintStr(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
}

int main()
{
    // char str[] = {'R','i','s','h','u','\0'};
    // char str[] = "Rishu";

    char str[50];
    printf("Enter String:");
    scanf(str);               //To take input.
    printf("Using custom function\n");
    PrintStr(str);
    printf("\nUsing printf\n");
    printf("%s",str);
    printf("\nUsing puts\n");
    puts(str);                   //Use to print string.
    return 0;
}
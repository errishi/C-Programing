/*Take inut from the user and ask user to choose 0 for triangular star pattern and 1 for reverse triangular patter. Then print the pattern accordingly

*
**
***
**** -> Triangular star patter

****
***
**
* ->Reverse triangular star patter*/

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

void StarPattern(int star)
{
    for (int i = 0; i < star; i++)
    {
        // to print character in each row
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void reverseStarPattern(int star)
{
    for (int i = 0; i < star; i++)
    {
        // to print character in each row
        for (int j = 0; j <= star - i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int input, star;
    while (true)
    {
        printf("\n0. Trangular star patter\n");
        printf("\n1. Reverse triangular star patter\n");
        printf("\n2. Quit\n");
        printf("Enter choice 0,1,2:");
        scanf("%d", &input);

        switch (input)
        {
        case 0:
        {
            printf("Enter number of row:");
            scanf("%d", &star);
            StarPattern(star);
            break;
        }
        case 1:
        {
            printf("Enter number of row:");
            scanf("%d", &star);
            reverseStarPattern(star);
            break;
        }
        case 2:
        {
            exit(0);
        }
        default:
        {
            printf("Invalid");
            break;
        }
        }
    }
    return 0;
}
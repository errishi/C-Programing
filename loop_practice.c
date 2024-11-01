// print table by user input using while loop.

#include <stdio.h>

int main()
{
    int n,i=1;
    printf("Enter number:");
    scanf("%d",&n);
    printf("The table of %d is", n);

    while (i <= 10)
    {
        printf("\n%d * %d = %d",n , i , n*i);
        i = i + 1;
    }
    
    return 0;
}

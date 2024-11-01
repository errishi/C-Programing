#include <stdio.h>


int main()
{
    int n;
    printf("Enter the number you want to multiplication table:");
    scanf("%d",&n);
    printf("The table of %d is", n);
    for (int i = 1; i < 11; i++)
    {
        printf("\n%d X %d = %d",n , i , n*i);
    }
    
    
    return 0;
}

#include <stdio.h>

/*Print a multiplication table of a number entered by user in pretty form ?*/

int main()
{
    /* code */
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    printf("Table Is");
    for (int i = 1; i <= 10; i++)
    {
        /* code */
        printf("\n%d * %d = %d", a , i , a*i);
    }
    
    return 0;
}

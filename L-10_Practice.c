#include <stdio.h>

int main()
{
    /* code */
    char n;
    printf("Main Menu\n");
    printf("1.Science\n");
    printf("2.Maths\n");
    printf("3.Both(Maths and Science)\n");
    printf("Enter Name\n");
    scanf("%s",&n);
    if (n=1)
    {
        printf("Wow! you won this price and reward amount is Rs15\n");
    }

    else if (n=2)
    {
        printf("Wow! you won this price and reward amount is Rs15\n");
    }

    else if (n=3)
    {
        printf("Congratulation! you won this price and reward amount is Rs45\n");
    }
    
    else{
        printf("Invalid");
    }
    
    return 0;
}

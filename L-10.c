#include <stdio.h>

int main()
{
    /* code */
    /*If , else , else-if condition*/
    int age;
    printf("Enter your age\n");
    
    scanf("%d" , &age);
    printf("Your have entered %d as your age\n", age);
    if (age>=18)
    {
        printf("You can vote!");
    }

    else if (age>=10)
    {
        printf("You are in between 10 to 18 , you cannot vote!");
    }

    else if (age>=3)
    {
        printf("You are in between 3 to 10 , you cannot vote!");
    }
    
    else{
        printf("You cannot vote!");
    }

    return 0;
}

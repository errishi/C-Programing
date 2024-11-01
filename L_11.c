#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("Your age is 3\n");
        switch (marks)
        {
        case 45:
            printf("Your marks is 45");
            break;

        default:
            printf("Your is not 45");
        }
        break;

    case 13:
        printf("Your age is 13\n");
        switch (marks)
        {
        case 45:
            printf("Your marks is 45");
            break;

        default:
            printf("Your is not 45");
        }
        break;

    case 23:
        printf("Your age is 23\n");
        switch (marks)
        {
        case 45:
            printf("Your marks is 45");
            break;

        default:
            printf("Your marks is not 45");
        }
        break;

    default:
        printf("Your age is not 3 , 13 and 23");
        break;
    }
    return 0;
}

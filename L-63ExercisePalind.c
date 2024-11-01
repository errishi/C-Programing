// Write a program to check the number is palindrom is not.

#include <stdio.h>

int is_palindrom(int num)
{
    int x, r, sum = 0;
    x = num;
    while (num != 0)
    {
        r = num % 10;
        sum = sum * 10 + r;
        num = num / 10;
    }
    if (sum == x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("Enter the number to chekc palindrom or not:\n");
    scanf("%d", &number);
    if (is_palindrom(number) == 1)
    {
        printf("The number %d is palindrom.", number);
    }
    else
    {
        printf("The number %d is not palindrom.", number);
    }
    return 0;
}
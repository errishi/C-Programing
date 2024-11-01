// Function

#include <stdio.h>

// Example of with argument and return value.
int sum(int a, int b)
{
    return a + b;
}

// Example of with argument and without value.
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

// Example of without argument and with value.
int takenumber()
{
    int i;
    printf("Enter number:\n");
    scanf("%d", &i);
    return i;
}

// Example of without argument and without value.
void unknown()
{
    printf("Good Morning!!!");
}

int main()
{
    int a, b, c, d;
    a = 2;
    b = 32;
    c = sum(a, b);
    // printf("Sum is %d\n", c);
    // printstar(7);
    // d = takenumber();
    // printf("The number entered is %d", d);
    unknown();

    return 0;
}

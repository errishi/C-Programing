/* To understand which is fast recursive or iterative approach*/

#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    else{
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n-1; i++)       // because index is start by 1
    {
        b = a + b;     
        a = b - a;           // because b have new value 
    }
    
    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series:\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position number %d using iterative approach is %d\n", number, fib_iterative(number));
    printf("The value of fibonacci number at position number %d using recursive approach is %d\n", number, fib_recursive(number));

    return 0;
}
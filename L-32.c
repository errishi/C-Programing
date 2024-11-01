#include <stdio.h>
#include <conio.h>

int func(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n", i, array[i]);
    }
    // array[0] = 324;   //very important point that if you change any value here , it get reflected in main.
    return 0;
}

// parameter using pointer.
void func1(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 536;
}

//multi dimention array.
void func2(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of %d , %d is %d\n", i,j, array[i][j]);
        }
    }
}

int main()
{
    int arr[][2] = {{2, 1},{ 5, 7}};
    // printf("The value of array at index 0 is %d\n",arr[0]);
    // func(arr);
    // printf("The value of array at index 0 is %d\n",arr[0]);

    // func1(arr);
    // func1(arr);
    func2(arr);

    return 0;
}
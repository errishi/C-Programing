/*Program to reverse an array*/

#include <stdio.h>

int i;
void ArrayReverse(int arr[])
{
    int temp;
    for (int i = 0; i < 8/2; i++)
    {
        //swap arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[7-i];
        arr[7-i] = temp;
    }   
    
}

int main()
{
    int arr[] = {11, 25, 3, 45, 10, 9, 7, 16};
    //for print array.
    printf("Before reversing array is\n");
    for (int i = 0; i < 8; i++)
    {
        printf("the value of element %d is %d\n",i, arr[i]);
    }
    ArrayReverse(arr);
    printf("\nAfter reversing array is\n");
    for (int i = 0; i < 8; i++)
    {
        printf("the value of element %d is %d\n",i, arr[i]);
    }
    return 0;
}
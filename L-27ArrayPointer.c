#include <stdio.h>

// Pointer Arithmatic
int main()
{
    // char a = '3';
    // char* ptra = &a;
    // printf("%d\n", ptra);
    // ptra--;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra-2);

    int arr[] = {10,24,4,3,5,8,7,9};
    int* arrayptra = arr;
    printf("Value at the position of 3 in array is %d\n", arr[2]);
    printf("The address of first element is %d\n", &arr[0]);
    printf("The address of first element is %d\n", arr);
    printf("The address of second element is %d\n", &arr[1]);
    printf("The address of second element is %d\n", arr + 1);
    //arr++;     // This line will through an error

    printf("The value at address of first element is %d\n", *(&arr[0]));
    printf("The value at address of first element is %d\n", arr[0]);
    printf("The value at address of first element is %d\n", *(arr));
    printf("The value at address of second element is %d\n", *(&arr[1]));
    printf("The value at address of second element is %d\n", arr[1]);
    printf("The value at address of second element is %d\n", *(arr + 1));

    return 0;
}
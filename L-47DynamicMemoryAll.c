#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the size of the array you want:");
    scanf("%d",&n);

    //--------------------using malloc() function-----------------------
    /*
    ptr = (int*)malloc(n*sizeof(int));
    //Take input
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value on %d of the array\n",i);
        scanf("%d",&ptr[i]);
    }
    //to print 
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the array is %d\n",i,ptr[i]);
    }
    */

   //------------using calloc() function-------------------
    ptr = (int*)calloc(n,sizeof(int));
    //to take input from user
    for (int i = 0; i < n; i++)      // if we do not take input calloc give initial value is 0.
    {
        printf("Enter the value on %d of the array\n",i);
        scanf("%d",&ptr[i]);
    }
    //print
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the array is %d\n",i,ptr[i]);
    }

    //-------------using realloc() function---------------
    printf("Enter the new size of the array you want to create\n");
    scanf("%d",&n);
    ptr = (int*)realloc(ptr,n*sizeof(int));
    //to take input
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value on %d of the array:",i);
        scanf("%d",&ptr[i]);
    }
    //to print new array element
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the array is %d\n",i,ptr[i]);
    }
    free(ptr);
    
    return 0;    
}
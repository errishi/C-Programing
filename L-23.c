/*Array in C */

#include <stdio.h>

int main()
{
    // one dimension array

    /*int mark[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter value of %d element of the array\n", i);
        scanf("%d", &mark[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, mark[i]);
    }*/

    /*Alternate*/

    /*int mark[4] = {21,44,51,32};

    for(int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n",i , mark[i]);
    }*/

    // 2 Dimension array

    int mark[2][4] = {{12, 33, 14, 10}, {32, 12, 44, 19}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d , %d element of the array is %d\n", i,j, mark[i][j]);
            printf("%d ", mark[i][j]);   // in form of matrix
        }
        printf("\n");
    }

    return 0;
}
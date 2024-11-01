// Matrix multiplication

#include <stdio.h>
#include <conio.h>

int main()
{
    int A[100][100], B[100][100], AB[100][100];
    int row, column, row1, column1, sum = 0;
    printf("Matrix multiplication\n");
    printf("Enter Row:");
    scanf("%d", &row);
    printf("Enter Column:");
    scanf("%d", &column);
    // Take element of 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the element at (%d,%d)\n", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    // Take input element of 2 D array of B array
    printf("Enter Row of B matrix\n");
    scanf("%d", &row1);
    printf("Enter Column of B matrix\n");
    scanf("%d", &column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("Enter the element at (%d,%d)\n", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }
    if (column != row1)
    {
        printf("Not valid order.");
    }
    else
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                for (int k = 0; k < row1; k++)
                {
                    sum = sum + (A[i][k] * B[k][j]);
                }
                AB[i][j] = sum;
                sum = 0;
            }
        }
    }
    printf("The resultant Matrix is\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d ", AB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
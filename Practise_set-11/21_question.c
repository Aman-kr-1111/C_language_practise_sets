// Input data into 2 matrices and calculate the addition of matrices.
#include <stdio.h>
int main()
{
    int matrix1[4][4], matrix2[4][4], matrix3[4][4];
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf("Matrix1 %d Row %d Column : ", row, column);
            scanf("%d", &matrix1[row][column]);
        }
    }
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf("Matrix2 %d Row %d Column : ", row, column);
            scanf("%d", &matrix2[row][column]);
        }
    }
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            matrix3[row][column] = matrix1[row][column] + matrix2[row][column];
            printf(" %d ", matrix3[row][column]);
        }

        printf("\n");
    }

    return 0;
}
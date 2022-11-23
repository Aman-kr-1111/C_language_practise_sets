// Multiply of matrix[3][2]*matrix[2][4] and store in new matrix[3][4]
#include <stdio.h>
int main()
{
    int matrix1[3][2], matrix2[2][4], matrix3[3][4];
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 2; column++)
        {
            printf("Matrix1 Row %d Column %d: ", row, column);
            scanf("%d", &matrix1[row][column]);
        }
    }
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf("Matrix2 Row %d Column %d : ", row, column);
            scanf("%d", &matrix2[row][column]);
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            matrix3[row][column] = 0;
            for (int k = 0; k < 2; k++)
            {
                matrix3[row][column] = matrix3[row][column] + (matrix1[row][k] * matrix2[k][column]);
            }
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf(" %d ", matrix3[row][column]);
        }
        printf("\n");
    }

    return 0;
}

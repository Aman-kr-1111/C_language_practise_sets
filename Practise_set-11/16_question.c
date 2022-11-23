// Input data into 4*4 square matrix and print them
#include <stdio.h>
int main()
{
    int matrix[4][4];
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf("Row %d and column %d matrix[%d][%d] : ", row, column, row, column);
            scanf("%d", &matrix[row][column]);
        }
    }
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf(" %d ", matrix[row][column]);
        }
        printf("\n");
    }

    return 0;
}
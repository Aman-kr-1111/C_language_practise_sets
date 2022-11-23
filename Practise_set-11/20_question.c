// Input data 4*4 square matrix and print sum of both diagonal respectively
#include <stdio.h>
int main()
{
    int matrix[4][4], sum1 = 0, sum2 = 0;
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
            if (row + column == 3)
            {
                sum1 = sum1 + matrix[row][column];
            }
            if (row == column)
            {
                sum2 = sum2 + matrix[row][column];
            }
        }
    }
    printf("The sum of 1st diagonal is : %d\n", sum1);
    printf("The sum of 2nd diagonal is : %d\n", sum2);
    printf("The sum of both diagonal is : %d\n", sum1 + sum2);
    return 0;
}
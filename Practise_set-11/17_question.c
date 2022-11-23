// Input data into 4*4 square matrix and calculate the sum of 3rd row
#include <stdio.h>
int main()
{
    int matrix[4][4], sum = 0;
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
            if (row == 2)
            {
                sum = sum + matrix[row][column];
            }
        }
    }
    printf("The sum of 3rd Row is : %d", sum);

    return 0;
}
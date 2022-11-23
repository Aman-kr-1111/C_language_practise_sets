// Store this matrix
// 0 1 0
// 1 1 1
// 0 1 0
// Solution not matched in this code
#include <stdio.h>
int main()
{
    int matrix[3][3];
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            if (row == 1 || column == 1)
            {
                matrix[row][column] == 1;
            }
            else
            {
                matrix[row][column] == 0;
            }
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            printf(" %d ", matrix[row][column]);
        }
        printf("\n");
    }
    return 0;
}
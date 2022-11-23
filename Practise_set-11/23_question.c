// Input matrix[3][4] and transpose it into matrix[4][3]
#include <stdio.h>
int main()
{
    int matrix[3][4], transpose_matrix[4][3];
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf("Matrix Row %d Column %d : ", row, column);
            scanf("%d", &matrix[row][column]);
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            transpose_matrix[column][row] = matrix[row][column];
        }
    }
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            printf(" %d ", transpose_matrix[row][column]);
        }
        printf("\n");
    }

    return 0;
}
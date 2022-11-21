// Print pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <stdio.h>
int main()
{

    int z = 1;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", z);
            z = z + 1;
        }
        printf("\n");
    }

    return 0;
}
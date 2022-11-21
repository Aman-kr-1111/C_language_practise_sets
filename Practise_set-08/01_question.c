// Input and print pattern
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    for (int k = 2; k <= num; k++)
    {
        for (int m = 1; m <= k; m++)
        {
            printf(" %d ", m);
        }
        printf("\n");
    }

    return 0;
}
// Input a number and print pattern
// * * 3 * *
// * * 3 * *
// 1 2 3 4 5
// * * 3 * *
// * * 3 * *
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (i == (num / 2) + 1 || j == (num / 2) + 1)
            {
                printf(" %d ", j);
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }

    return 0;
}
// Input a number print pattern
// 1 * * * *
// * 2 * * *
// * * 3 * *
// * * * 4 *
// * * * * 5
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
            if (i == j)
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
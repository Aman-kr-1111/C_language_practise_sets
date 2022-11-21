// Input a number print pattern
// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = num; j >= i; j--)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    for (int k = num - 1; k >= 1; k--)
    {
        for (int l = num; l >= k; l--)
        {
            printf(" %d ", l);
        }
        printf("\n");
    }

    return 0;
}
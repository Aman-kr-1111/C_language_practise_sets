// Input a number and print pattern
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
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

    return 0;
}
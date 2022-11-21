// Input a number and print pattern
// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5
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

    return 0;
}
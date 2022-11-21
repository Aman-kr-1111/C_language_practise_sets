// Input a number and print pattern
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        for (int j = i; j <= num; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }

    return 0;
}
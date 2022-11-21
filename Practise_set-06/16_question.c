// Input a number and print pattern
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }

    return 0;
}
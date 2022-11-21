// Input a number and print pattern
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// . . . . .
// n n n n n
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
            printf(" %d ", i);
        }
        printf("\n");
    }

    return 0;
}

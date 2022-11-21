// Input a number and print pattern
// 1 2 3 4 ...n
// 1 2 3 4 ...n
// 1 2 3 4 ...n
// 1 2 3 4 ...n
// 1 2 3 4 ...n
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
            printf(" %d ", j);
        }
        printf("\n");
    }

    return 0;
}
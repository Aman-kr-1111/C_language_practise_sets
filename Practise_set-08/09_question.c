// Input a number and print pattern
// 1 2 3 4 5 6 7
// 1           7
// 1           7
// 1           7
// 1           7
// 1           7
// 1 2 3 4 5 6 7
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
            if (j == 1 || j == num || i == 1 || i == num)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
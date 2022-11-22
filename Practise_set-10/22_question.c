// Input a number and print pattern by function
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    int pattern(int);
    pattern(num);
    return 0;
}
int pattern(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}
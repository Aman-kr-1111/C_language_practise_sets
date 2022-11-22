// Input a number and print pattern by function
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your numebr : ");
    scanf("%d", &num);
    int pattern(int);
    pattern(num);
    return 0;
}
int pattern(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}
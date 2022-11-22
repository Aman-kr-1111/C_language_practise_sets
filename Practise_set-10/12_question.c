// 2: Function accept parameters but doesn't return value
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    int series(int);
    series(num);
    return 0;
}
int series(int x)
{
    for (int i = 1; i <= x; i++)
    {
        printf(" %d ", i);
    }
    return 0;
}

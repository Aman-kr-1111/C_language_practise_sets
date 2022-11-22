// Input a number and print n,n-1,n-2 ...3,2,1,2 ...,n
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
int series(int n)
{
    for (int i = n; i >= 1; i--)
    {
        printf(" %d ", i);
    }
    for (int j = 2; j <= n; j++)
    {
        printf(" %d ", j);
    }
    return 0;
}
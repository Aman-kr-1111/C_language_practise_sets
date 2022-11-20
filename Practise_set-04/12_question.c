// Input two number and calculate the sum of that type series x/1+x/3+x/5 ...+x/n
#include <stdio.h>
int main()
{
    int x, n, sum = 0;
    printf("Enter your number of x : ");
    scanf("%d", &x);
    printf("Enter your number of n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        sum = sum + (x / i);
    }
    printf("%d", sum);

    return 0;
}
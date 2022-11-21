// Input two number and print sum of series x/1+x/3+x/5 ...+x/n;
#include <stdio.h>
int main()
{
    float i, x, n, sum = 0;
    printf("Enter your number for x : ");
    scanf("%f", &x);
    printf("Enter your number for n : ");
    scanf("%f", &n);
    i = 1;
    while (i <= n)
    {
        sum = sum + (x / i);
        i = i + 2;
    }
    printf("The answer is : %.2f", sum);

    return 0;
}
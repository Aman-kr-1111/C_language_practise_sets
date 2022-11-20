// Input two number and print the value x/1,x/2,x/3 ...,x/n
#include <stdio.h>
int main()
{
    float x, n;
    printf("Enter your number for x : ");
    scanf("%f", &x);
    printf("Enter your number for n : ");
    scanf("%f", &n);
    for (float i = 1; i <= n; i++)
    {
        printf("\n%.2f / %.2f = %.2f ", x, i, x / i);
    }

    return 0;
}
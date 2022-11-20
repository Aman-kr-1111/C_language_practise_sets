// Input two number and print the value x^2/1^2,x^2/2^2,x^2/3^2 ...,x^2/n^2
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
        printf("\n%.0f / %.0f = %.2f ", x * x, i * i, (x * x) / (i * i));
    }

    return 0;
}
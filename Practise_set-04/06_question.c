// Input two number and print the value 1/x,3/x,5/x ...n/x
#include <stdio.h>
int main()
{
    float x, n;
    printf("Enter your number for x : ");
    scanf("%f", &x);
    printf("Enter your number for n : ");
    scanf("%f", &n);
    for (float i = 1; i <= n; i += 2)
    {
        printf("\n%.2f / %.2f = %.2f ", i, x, i / x);
    }

    return 0;
}
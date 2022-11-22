// Input 2 number and calculate division using function
#include <stdio.h>
int main()
{
    float num1, num2;
    float result;
    printf("Enter your 1st number : ");
    scanf("%f", &num1);
    printf("Enter your 2nd number : ");
    scanf("%f", &num2);
    float divide(float, float);
    result = divide(num1, num2);
    printf("%.2f / %.2f = %.2f", num1, num2, result);
    return 0;
}
float divide(float x, float y)
{
    return (x / y);
}
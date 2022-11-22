// Input 2 number and calculate multiply using function
#include <stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter your 1st number : ");
    scanf("%d", &num1);
    printf("Enter your 2nd number : ");
    scanf("%d", &num2);
    int multiply(int, int);
    result = multiply(num1, num2);
    printf("%d * %d = %d", num1, num2, result);
    return 0;
}
int multiply(int x, int y)
{
    int c;
    c = x * y;
    return c;
}
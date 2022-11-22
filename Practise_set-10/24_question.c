// Input a number and calculate it's factorials
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter your number : ");
    scanf("%d", &num);
    int factorial(int num);
    result = factorial(num);
    printf("Your number is %d and it's factorial is : %d", num, result);
    return 0;
}
int factorial(int x)
{
    int m = 1;
    for (int i = 1; i <= x; i++)
    {
        m = m * i;
    }

    return m;
}
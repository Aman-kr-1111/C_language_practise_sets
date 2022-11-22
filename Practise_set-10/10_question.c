// Input a number and find factorial of that number using function
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter your number : ");
    scanf("%d", &num);
    int factorial(int);
    result = factorial(num);
    printf("Your number is %d and it's factorial is %d", num, result);
    return 0;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

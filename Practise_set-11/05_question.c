// Input a number and find its factorial by recursion
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter your number : ");
    scanf("%d", &num);
    int fact(int);
    result = fact(num);
    printf("Your number is %d and its factorial is : %d", num, result);
    return 0;
}
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * (fact(n - 1)));
    }
}
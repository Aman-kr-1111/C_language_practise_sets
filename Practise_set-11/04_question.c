// Input a number and print sum of 1 to that number
//  Sum = 1+2+3+ ...+n
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter your number : ");
    scanf("%d", &num);
    int sum(int);
    result = sum(num);
    printf("Sum of 1 to %d number is : %d", num, result);
    return 0;
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
        return (n + sum(n - 1));
}

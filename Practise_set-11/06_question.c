// Input a number and calculate sum of its digits
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter your number : ");
    scanf("%d", &num);
    int sum(int);
    result = sum(num);
    printf("Your number is %d and sum of its even digits is %d", num, result);
    return 0;
}
int sum(int n)
{
    int s = 0, r;
    if (n == 0)
    {
        return 0;
    }
    else

        return (n % 10 + sum(n / 10));
}
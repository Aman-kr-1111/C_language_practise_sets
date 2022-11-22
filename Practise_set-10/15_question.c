// Input a number check prime number
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter your number : ");
    scanf("%d", &num);
    int prime(int);
    result = prime(num);
    return 0;
}
int prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
}
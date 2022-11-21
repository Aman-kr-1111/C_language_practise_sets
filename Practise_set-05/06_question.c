// Input a number check that number is prime or not
#include <stdio.h>
int main()
{
    int num, i = 1, count = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    while (i <= num)
    {
        if (num % i == 0)
        {
            count++;
        }

        i++;
    }
    if (count == 2)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }

    return 0;
}
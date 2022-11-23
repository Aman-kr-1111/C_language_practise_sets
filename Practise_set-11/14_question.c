// Input 10 number in array and print prime number
#include <stdio.h>
int main()
{
    int num[10], prime_num, count = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Input your data in num[%d] : ", i);
        scanf("%d", &num[i]);
    }
    for (int j = 1; j <= 10; j++)
    //   Some issues in this code
    {
        count = 0;
        prime_num = num[j];
        for (int k = 1; k <= 10; k++)
        {
            if (prime_num % k == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("\n%d is a prime number", num[j]);
        }
    }

    return 0;
}
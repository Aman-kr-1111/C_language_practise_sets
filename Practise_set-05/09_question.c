// Input a number and sum of its even number digits
#include <stdio.h>
int main()
{
    int num, store_num, r, sum = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    store_num = num;
    while (0 < num)
    {
        r = num % 10;
        if (r % 2 == 0)
        {
            sum = sum + r;
        }
        num = num / 10;
    }
    printf("Your number is %d and sum of its even number is %d", store_num, sum);

    return 0;
}
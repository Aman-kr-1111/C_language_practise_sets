// Input a number and sum of odd digits
#include <stdio.h>
int main()
{
    int num, store_num, r, sum = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    store_num = num;
    do
    {
        r = num % 10;
        if (r % 2 != 0)
        {
            sum = sum + r;
        }
        num = num / 10;

    } while (num > 0);
    printf("Your input number is %d and sum of its odd number : %d", store_num, sum);

    return 0;
}
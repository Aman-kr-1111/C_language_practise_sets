// Input a number and check its arm-strong or not
#include <stdio.h>
int main()
{
    int num, store_num, sum = 0, r;
    printf("Enter your number : ");
    scanf("%d", &num);
    store_num = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }
    if (store_num == sum)
    {
        printf("%d is a arm-strong number", store_num);
    }
    else
    {
        printf("%d is not a arm-strong number", store_num);
    }

    return 0;
}
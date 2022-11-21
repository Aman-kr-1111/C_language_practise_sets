// Input a number and count its digits
#include <stdio.h>
int main()
{
    int num, count = 0, store_num;
    printf("Enter your number : ");
    scanf("%d", &num);
    store_num = num;
    while (0 < num)
    {
        num = num / 10;
        count++;
    }
    if (store_num == 0)
    {
        printf("Your number is %d and its digits is 1 ", store_num);
    }
    else
    {
        printf("Your number is %d and its digits is %d", store_num, count);
    }

    return 0;
}
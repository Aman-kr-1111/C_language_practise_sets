// Input a number and sum of its digits
#include <stdio.h>
int main()
{
    int num, sum = 0, store_num;
    printf("Enter a number : ");
    scanf("%d", &num);
    store_num = num;
    while (0 < num)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    printf("Your number is %d and sum of its digits is %d", store_num, sum);
    return 0;
}
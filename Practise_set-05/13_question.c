// Input a number and print sum of first and last digits
#include <stdio.h>
int main()
{
    int num, store_num, last;
    printf("Enter your number : ");
    scanf("%d", &num);
    store_num = num;
    last = num % 10;
    while (num > 9)
    {
        num = num / 10;
    }
    printf("Your input number is %d and sum of first and last digits is : %d", store_num, num + last);

    return 0;
}
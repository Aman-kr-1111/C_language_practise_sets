// Input a number and check wheather its palindrome or not
#include <stdio.h>
int main()
{
    int num, store_num, r, reverse_num = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    store_num = num;
    while (num > 0)
    {
        r = num % 10;
        reverse_num = (reverse_num * 10) + r;
        num = num / 10;
    }
    if (store_num == reverse_num)
    {
        printf("%d is a palindrome number", store_num);
    }
    else
    {
        printf("%d is not a palindrome number", store_num);
    }

    return 0;
}
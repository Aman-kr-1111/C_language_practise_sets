// Input a number and check wheather it's palindrome or not
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    int palindrome(int);
    palindrome(num);
    return 0;
}
int palindrome(int x)
{
    int r, sum = 0, store_x;
    store_x = x;
    while (x > 0)
    {
        r = x % 10;
        sum = (sum * 10) + r;
        x = x / 10;
    }
    if (sum == store_x)
    {
        printf("%d is a palindrome ", store_x);
    }
    else{
        printf("%d is not a palindrome ", store_x);
    }
    return 0;
}
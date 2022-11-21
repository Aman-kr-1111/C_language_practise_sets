// Input a number print its reverse  4567 --> 7654
#include <stdio.h>
int main()
{
    int num, store_num, r, reverse_num;
    printf("Enter your number : ");
    scanf("%d", &num);
    // store_num = num;
    while (num > 0)
    {
        r = num % 10;
        printf("%d", r);
        num = num / 10;
    }

    return 0;
}

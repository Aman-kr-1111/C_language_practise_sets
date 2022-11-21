// Input a number print its reverse  4567 --> 7654
#include <stdio.h>
int main()
{
    int num,store_num,r,reverse_num=0;
    printf("Enter your number : ");
    scanf("%d", &num);
    store_num = num;
    while (num > 0)
    {   
        r = num%10;
        reverse_num =(reverse_num*10)+r;
        num = num / 10;
    }
        printf("Your input number is %d and its reverse is %d",store_num,reverse_num);

    return 0;
}

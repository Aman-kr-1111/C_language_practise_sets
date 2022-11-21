// Input a number and find the average of its even digits
#include <stdio.h>
int main()
{
    int num, store_num, r;
    float sum = 0, count = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    store_num = num;
    do
    {
        r = num % 10;
        if (r % 2 == 0)
        {
            sum = sum + r;
            count++;
        }
        num = num / 10;

    } while (num > 0);
    printf("Your input number is %d and average of its even digits is %.2f", store_num, (sum / count));

    return 0;
}
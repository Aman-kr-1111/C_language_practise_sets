// Input a number and calculate average of odd number digits
#include <stdio.h>
int main()
{
    int num, store_num, r, sum = 0, count = 0;
    float avg;
    printf("Enter your number : ");
    scanf("%d", &num);
    store_num = num;
    while (0 < num)
    {
        r = num % 10;
        if (r % 2 != 0)
        {
            sum = sum + r;
            count++;
        }
        num = num / 10;
    }
    avg = (sum / count);
    printf("Your number is %d and its average of odd number digits %.2f", store_num, avg);

    return 0;
}
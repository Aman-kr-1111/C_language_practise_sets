// Input 10 data in array and calculate average of positive even number
#include <stdio.h>
int main()
{
    int num[10], sum = 0, count = 0;
    float avg;
    for (int i = 1; i <= 10; i++)
    {
        printf("Input your data in num[%d] : ", i);
        scanf("%d", &num[i]);
    }
    for (int j = 1; j <= 10; j++)
    {
        if (num[j] >= 0 && num[j] % 2 == 0)
        {
            sum = sum + num[j];
            count++;
        }
    }
    avg = sum / (float)count;
    printf("The average of positive numbers is : %.2f", avg);

    return 0;
}
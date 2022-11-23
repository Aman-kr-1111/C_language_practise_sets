// Input 10 data in array and count negative data only
#include <stdio.h>
int main()
{
    int num[10], negative = 0, positive = 0, zero = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Input your data in num[%d] : ", i);
        scanf("%d", &num[i]);
    }
    for (int j = 1; j <= 10; j++)
    {
        if (num[j] > 0)
        {
            positive++;
        }
        else if (num[j] == 0)
        {
            zero++;
        }
        else
        {
            negative++;
        }
    }
    printf("You are entered total %d negative numbers\n", negative);
    printf("You are entered total %d positive numbers\n", positive);
    printf("You are entered total %d zero numbers\n", zero);

    return 0;
}
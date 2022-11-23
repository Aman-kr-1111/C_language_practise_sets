// Input 10 data in array and calculate maximum value
#include <stdio.h>
int main()
{
    int num[10], max;
    for (int i = 1; i <= 10; i++)
    {
        printf("Input your data in num[%d] : ", i);
        scanf("%d", &num[i]);
    }
    max = num[1];
    for (int j = 1; j <= 10; j++)
    {
        if (max < num[j])
        {
            max = num[j];
        }
    }
    printf("Your maximum number whose input is : %d", max);

    return 0;
}
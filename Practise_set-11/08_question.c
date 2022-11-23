// Input 10 data in array and print the sum of all data
#include <stdio.h>
int main()
{
    int num[10], sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Input your number in num[%d] : ", i);
        scanf("%d", &num[i]);
    }
    for (int j = 1; j <= 10; j++)
    {
        sum = sum + num[j];
    }
    printf("The sum of all 10 arrays data is : %d", sum);

    return 0;
}
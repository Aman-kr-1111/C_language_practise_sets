// Input 10 number in array and all even number store into another and print them
#include <stdio.h>
int main()
{
    int num[10], even[10], n= 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Input your data in num[%d] : ", i);
        scanf("%d", &num[i]);
    }
    for (int j = 1; j <= 10; j++)
    {                 
        if (num[j] % 2 == 0)
        {
            even[n] = num[j];
            n++;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        printf("Even number in this array is : %d\n", even[k]);
    }

    return 0;
}
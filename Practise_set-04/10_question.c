// Input a number and calculate sum of 1 to that number
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
        // printf(" %d ", sum);
    }
    printf("The sum of 1 to %d is : %d", num, sum);

    return 0;
}
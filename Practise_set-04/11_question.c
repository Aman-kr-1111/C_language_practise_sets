// Input a number and calculate square of sum of 1 to that number
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        sum = sum + i * i;
        // printf(" %d ", sum);
    }
    printf("The Square of sum 1 to %d is : %d", num, sum);

    return 0;
}
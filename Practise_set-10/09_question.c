// Input a number and find sum 1 to that number
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter your number : ");
    scanf("%d", &num);
    int sum(int);
    result = sum(num);
    printf("Sum of 1 to %d is : %d", num, result);
    return 0;
}
int sum(int x)
{
    int s = 0;
    for (int i = 1; i <= x; i++)
    {
        s = s + i;
    }
    return s;
}

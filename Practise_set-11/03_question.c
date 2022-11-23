// Input a number and print sum of 1 to that number
//  Sum = 1+2+3+ ...+n
#include <stdio.h>
int i = 1;
int s = 0;
int main()
{
    int num, result;
    printf("Enter your number : ");
    scanf("%d", &num);
    int sum(int);
    sum(num);
    printf("Sum of 1 to %d number is : %d", num, s);
    return 0;
}
int sum(int n)
{
    if (i <= n)
    {
        s = s + i;
        i++;
        sum(n);
    }
}

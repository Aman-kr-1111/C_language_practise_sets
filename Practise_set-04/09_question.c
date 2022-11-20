// Input a number and print 1,2,3 ...,n,n-1,n-2 ...,3,2,1
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf(" %d ", i);
    }
    for (int i = num - 1; i >= 1; i--)
    {
        printf(" %d ", i);
    }

    return 0;
}
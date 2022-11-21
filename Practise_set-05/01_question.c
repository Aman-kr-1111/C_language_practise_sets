// Input a number and print 1,2,3 ...,n,n-1 ...,3,2,1
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    i = 1;
    while (i <= num)
    {
        printf(" %d ", i);
        i++;
    }

    i = num - 1;
    while (i >= 1)
    {
        printf(" %d ", i);
        i--;
    }

    return 0;
}
// Input a number and print 1 to that number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        printf(" %d ", i);
    }

    return 0;
}
// Input a number and print n,n-1,n-2 ...,3,2,1 by recursion
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    int series(int);
    series(num);
    return 0;
}
int series(int n)
{
    if (n >= 1)
    {
        printf(" %d ", n);
        n--;
        series(n); // Recursion
    }
}
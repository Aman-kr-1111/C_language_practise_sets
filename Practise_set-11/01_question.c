// Input a number and print series 1,2,3 ...,n by recursion
#include <stdio.h>
int i = 1;
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
    if (i <= n)
    {
        printf(" %d ", i);
        i++;
        series(n); // Recursion
    }
}

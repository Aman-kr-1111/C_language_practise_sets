// 1: Function accept parameters and return value
#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter your number : ");
    scanf("%d", &num);
    int sum(int);
    result = sum(num);
    printf("Sum : %d", result);
    return 0;
}
int sum(int x)
{
    int s = 0;
    for (int i = 1; i <= x; i += 2)
    {
        s = s + i;
    }
    return s;
}
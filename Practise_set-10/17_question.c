// Input a number and calculate sum of its even digits
#include <stdio.h>
int main()
{
    int num, result;
    printf("Entr your number : ");
    scanf("%d", &num);
    int sum_digits(int);
    result = sum_digits(num);
    printf("Your number is %d and sum of its even digits is %d", num, result);
    return 0;
}
int sum_digits(int x)
{
    int r, s = 0;
    while (x > 0)
    {
        r = x % 10;
        if (r % 2 == 0)
        {
            s = s + r;
        }
        x = x / 10;
    }
    return s;
}
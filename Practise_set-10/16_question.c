// Calculate sum of all number from 1 to 100 which are divisible by 3 and 7
#include <stdio.h>
int main()
{
    int result;
    int sum();
    result = sum();
    printf("The sum of all number from 1 to 100 which are divisible by 3 and 7 : %d", result);
    return 0;
}
int sum()
{
    int s = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            s = s + i;
        }
    }
    return s;
}
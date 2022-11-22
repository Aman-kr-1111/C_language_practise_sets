// 3: Function doesn't accept parameter and doesn't return value
#include <stdio.h>
int main()
{
    int series();
    series();
    return 0;
}
int series()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%d ", i);
    }
    return 0;
}
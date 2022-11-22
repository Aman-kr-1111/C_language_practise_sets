// 4: Function doesn't accept parameters but return value
#include <stdio.h>
int main()
{
    int result;
    int sum();
    result = sum();
    printf("%d", result);
    return 0;
}
int sum()
{
    int s = 0;
    for (int i = 1; i <= 10; i++)
    {
        s = s + i;
    }
    return s;
}
// Input 10 data in array and print all in reverse
#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 1; i <= 10; i++)
    {
        printf("Input your data in a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 10; i >= 1; i--)
    {
        printf("\nYour input data in a[%d] is : %d\n", i, a[i]);
    }

    return 0;
}
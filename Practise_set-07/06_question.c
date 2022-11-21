// Input a number and print pattern
//          5
//        4 4
//      3 3 3
//    2 2 2 2
//  1 1 1 1 1
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = num; k >= i; k--)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
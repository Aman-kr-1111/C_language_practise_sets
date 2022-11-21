// Input a number and print pattern
//          1
//        2 2
//      3 3 3
//    4 4 4 4
//  5 5 5 5 5
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = num - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
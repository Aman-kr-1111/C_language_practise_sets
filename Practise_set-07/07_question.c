// Input a number and print pattern
//  1 2 3 4 5
//    2 3 4 5
//      3 4 5
//        4 5
//          5
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = i; k <= num; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
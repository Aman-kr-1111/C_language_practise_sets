// Input a number and print pattern
// 1 1 1 1 1
//   2 2 2 2
//     3 3 3
//       4 4
//         5
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
        for (int k = num; k >= i; k--)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
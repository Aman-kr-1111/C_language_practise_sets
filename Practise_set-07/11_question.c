// Input a number and print pattern
// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
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
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
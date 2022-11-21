// Input a number print pattern
//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9
#include <stdio.h>
int main()
{
    int num, z = 1;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i += 2)
    {
        for (int j = num; j >= i - 1; j--)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf(" %d", k);
        }

        printf("\n");
    }

    return 0;
}
// Input a number print pattern
// 1 2 3 4 5
//   1 2 3 4
//     1 2 3
//       1 2
//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        for (int j = i; j <= num; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    for (int l = 2; l <= num; l++)
    {
        for (int m = l; m <= num; m++)
        {
            printf(" ");
        }
        for (int n = 1; n <= l; n++)
        {
            printf("%d", n);
        }
        printf("\n");
    }

    return 0;
}
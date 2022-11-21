// Input a number print pattern
// A B C D E
//   A B C D
//     A B C
//       A B
//         A
//       A B
//     A B C
//   A B C D
// A B C D E
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
            printf("%c", 64 + k);
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
            printf("%c", 64 + n);
        }
        printf("\n");
    }

    return 0;
}
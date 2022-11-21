// Input a number print pattern
//       1
//     3 3 3
//   5 5 5 5 5
// 7 7 7 7 7 7 7
#include <stdio.h>
int main()
{
    int num;
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
            printf(" %d", i);
        }
        printf("\n");
    }

    return 0;
}
// Input a number and print pattern
// 5 5 5 5 5
//   4 4 4 4
//     3 3 3
//       2 2
//         1
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
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
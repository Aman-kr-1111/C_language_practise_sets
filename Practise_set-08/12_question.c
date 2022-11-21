// Input a number print pattern
//       1
//     2 2 2
//   3 3 3 3 3
// 4 4 4 4 4 4 4
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j <= num; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) 
        {
            printf("%d", i);
        }
        for (int m = 2; m <= i; m++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
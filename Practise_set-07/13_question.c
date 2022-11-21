// Input a number and print pattern
// A B C D E
// A B C D
// A B C
// A B
// A
#include <stdio.h>
int main()
{
    int num;
    printf("Entr your number : ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %c ", 64 + j);
        }
        printf("\n");
    }

    return 0;
}
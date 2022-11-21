// Input a number and print pattern
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E

#include <stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf(" %c ", 64 + j);
        }
        printf("\n");
    }

    return 0;
}

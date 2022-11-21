// Input a number and print pattern
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E

#include <stdio.h>
int main()
{
    char c;
    printf("Enter your Character(in capital letter) : ");
    scanf("%c", &c);
    for (int i = 'A'; i <= c; i++)
    {
        for (int j = 'A'; j <= c; j++)
        {
            printf(" %c ", j);
        }
        printf("\n");
    }

    return 0;
}

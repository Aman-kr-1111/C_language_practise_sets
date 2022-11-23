// print your name in this pattern
// A
//  M
//   A
//    N
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter your name : ");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        printf("%c", name[i]);

        printf("\n");
    }

    return 0;
}
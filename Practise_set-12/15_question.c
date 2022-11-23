// Print your string in this pattern
// M o h a n
// o h a n
// h a n
// a n
// n

#include <stdio.h>
int main()
{
    char name[30], count = 0;
    printf("Enter your string : ");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    for (int j = 0; j <= count-1; j++)
    {
        for (int k = j; k <= count-1; k++)
        {
            printf(" %c ", name[k]);
        }
        printf("\n");
    }

    return 0;
}
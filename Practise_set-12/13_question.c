// Print your string in this pattern
// M 
// M o 
// M o h 
// M o h a 
// M o h a n

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
        for (int k = 0; k <= j; k++)
        {
            printf(" %c ", name[k]);
        }
        printf("\n");
    }

    return 0;
}
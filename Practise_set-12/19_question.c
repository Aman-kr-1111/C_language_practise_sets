// Input 10 name and suffix/prefix mr. is add
#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][30], prefix[30];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your %d string : ", i);
        gets(name[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        strcpy(prefix, "Mr.");
        strcat(prefix, name[i]);
        strcpy(name[i], prefix);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("your %d string : %s\n", i, name[i]);
    }

    return 0;
}

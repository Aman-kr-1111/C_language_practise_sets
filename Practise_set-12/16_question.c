// Input 10 string and and print only those string which are started from 'a'
#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][30];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your %d string : ", i);
        gets(name[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (name[i][0] == 'A' || name[i][0] == 'a')
        {
            printf("Your %d string is : %s\n", i, name[i]);
        }
    }

    return 0;
}
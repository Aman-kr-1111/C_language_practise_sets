// Input 10 name and print the name which maximum length
#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][30];
    int max_length = 0, f;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your %d string : ", i);
        gets(name[i]);
    }
    max_length = strlen(name[0]);
    for (int j = 0; j < 10; j++)
    {
        if (max_length < strlen(name[j]))
        {
            max_length = strlen(name[j]);
            f = j;
        }
    }
    printf("Maximum length of string name is %s and it's length is %d", name[f], max_length);

    return 0;
}
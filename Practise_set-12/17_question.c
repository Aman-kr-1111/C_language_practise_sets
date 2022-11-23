// Input 10 string and and find a particular name
#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][30], search_name[30], find = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your %d string : ", i);
        gets(name[i]);
    }
    printf("\nEnter your search name : ");
    gets(search_name);
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(search_name, name[i]) == 0)
        {
            find++;
        }
    }
    if (find > 0)
    {
        printf("Your search name %s is avilable in array of string",search_name);
    }
    else
    {
        printf("Your search name %s is not avilable in array of string",search_name);
    }

    return 0;
}
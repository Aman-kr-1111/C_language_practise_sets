// Input a string and convert into upper case
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter your string : ");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = name[i] - 32;
    }
    printf("Your string in upper case : %s",name);

    return 0;
}
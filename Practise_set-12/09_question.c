// Input a string and convert into sentence case
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter your string : ");
    gets(name);
    if (name[0] >= 'a' && name[0] <= 'z')
    {
        name[0] = name[0] - 32;
    }
    for (int i = 1; name[i] != '\0'; i++)
    {

        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
    }
    printf("Your string in sentence case : %s", name);

    return 0;
}
// Input a string convert into toggle case
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter your string : ");
    gets(name);
    if (name[0] >= 'A' && name[0] <= 'Z')
    {
        name[0] = name[0] + 32;
    }
    for (int i = 1; name[i] != '\0'; i++)
    {

        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
    printf("Your string in sentence case : %s", name);

    return 0;
}
// Input your name print every character in new line
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter your name : ");
    gets(name);
    for (int i = 0; i <= 30; i++)
    {
        if (name[i] == '\0')
        {
            break;
        }
        else
        {
            printf("\n %c", name[i]);
        }
    }

    return 0;
}
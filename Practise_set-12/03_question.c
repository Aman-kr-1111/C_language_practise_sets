// Input your name print every character in new line
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter your name : ");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("\n %c", name[i]);
    }

    return 0;
}
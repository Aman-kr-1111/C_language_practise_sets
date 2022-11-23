// Input a string and count number of words
#include <stdio.h>
int main()
{
    int count = 1;
    char name[30];
    printf("Enter your string : ");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (' ' == name[i])
        {
            count++;
        }
    }
    printf("Your name is (%s) and total word are %d", name, count);

    return 0;
}
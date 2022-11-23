// Input a string and count number of letters
#include <stdio.h>
int main()
{
    char name[30];
    int count = 0;
    printf("Enter your string : ");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    printf("Your name is (%s) and total character of this word is %d", name, count);

    return 0;
}
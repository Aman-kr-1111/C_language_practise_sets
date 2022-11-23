// Input your name by scanf and gets and print difference
#include<stdio.h>
// int main()
// {
//     char name[30]="Aman kumar";
//     printf("%s\n",name);
//     name[4] = '\0';
//     printf("%s\n",name);
//     return 0;
// }

int main()
{
    char name[30]="Aman kumar";
    printf("Enter your name : ");
    // scanf("%s",name);
    // printf("%s\n",name);
    gets(name);
    printf("%s\n",name);
    puts(name);
    return 0;
}
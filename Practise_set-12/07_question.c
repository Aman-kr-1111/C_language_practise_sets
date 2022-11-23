// Input a string and count no of character,alphabets,vowels,consonants,digits,space and special character
#include <stdio.h>
int main()
{
    int characters = 0, alphabets1 = 0, alphabets2 = 0, vowels = 0, consonants = 0, digits = 0, space = 0, special_character = 0;
    char name[34];
    printf("Enter your string : ");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        characters++;
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            alphabets1++;
        }
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            alphabets2++;
        }
        if (name[i] >= '0' && name[i] <= '9')
        {
            digits++;
        }
        if (name[i] == 'a' || name[i] == 'A' || name[i] == 'e' || name[i] == 'E' || name[i] == 'i' || name[i] == 'I' || name[i] == 'o' || name[i] == 'O' || name[i] == 'u' || name[i] == 'U')
        {
            vowels++;
        }
        if (name[i] == ' ')
        {
            space++;
        }
    }
    consonants = (alphabets1 + alphabets2) - vowels;
    special_character = characters - (digits + alphabets1 + alphabets2 + space);
    printf("Total number of Characters : %d\n", characters);
    printf("Capital letters of Alphabets : %d\n", alphabets1);
    printf("Small letters of Alphabets : %d\n", alphabets2);
    printf("Total number of Alphabets : %d\n", alphabets1 + alphabets2);
    printf("Total number of Vowels : %d\n", vowels);
    printf("Total number of Consonants : %d\n", consonants);
    printf("Total number of Digits : %d\n", digits);
    // printf("Total number of Characters : %d", characters);

    return 0;
}
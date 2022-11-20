// Input value of year and print leap year or not.
// {
//     1 -- > year % 100 == 0;
//     year % 400 == 0 2 -- > year % 4 == 0;
// }
#include <stdio.h>
int main()
{
    int year;
    printf("Input value of year : ");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("%d is a leap year", year);
        }
        else
        {
            printf("%d is not a leap year", year);
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            printf("%d is a leap year", year);
        }
        else
        {
            printf("%d is not a leap year", year);
        }
    }

    return 0;
}
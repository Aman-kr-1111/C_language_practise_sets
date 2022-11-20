// Input 3 number and calculate greatest number
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter your 1st number : ");
    scanf("%d", &num1);
    printf("Enter your 2nd number : ");
    scanf("%d", &num2);
    printf("Enter your 3rd number : ");
    scanf("%d", &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Your numbers are %d , %d and %d finally %d is a greatest number", num1, num2, num3, num1);
        }
        else
        {
            printf("Your numbers are %d , %d and %d finally %d is a greatest number", num1, num2, num3, num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("Your numbers are %d , %d and %d finally %d is a greatest number", num1, num2, num3, num2);
        }
        else
        {
            printf("Your numbers are %d , %d and %d finally %d is a greatest number", num1, num2, num3, num3);
        }
    }

    return 0;
}
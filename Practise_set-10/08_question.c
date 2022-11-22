// Input 3 number and find greatest by function
#include <stdio.h>
int main()
{
    int num1, num2, num3, result;
    printf("Enter your 1st number : ");
    scanf("%d", &num1);
    printf("Enter your 2nd number : ");
    scanf("%d", &num2);
    printf("Enter your 3rd number : ");
    scanf("%d", &num3);
    int check(int, int, int);
    result = check(num1, num2, num3);
    return 0;
}
int check(int x, int y, int z)
{
    if (x > y)
    {
        if (x > z)
        {
            printf("%d is a greatest number", x);
        }
        else
        {
            printf("%d is a greatest number", z);
        }
    }
    else
    {

        if (y > z)
        {
            printf("%d is a greatest number", y);
        }
        else
        {
            printf("%d is a greatest number", z);
        }
    }
    return 0;
}
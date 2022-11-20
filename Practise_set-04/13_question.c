// Input a number and find factorial of that number
#include <stdio.h>
int main()
{
    int num, multiply = 1;
    printf("Enter your number : ");
    scanf("%d", &num);
    for (int i = num; i >= 1; i--)
    {
        multiply = multiply * i;
    }
    printf("The factorial of %d is : %d", num, multiply);

    return 0;
}
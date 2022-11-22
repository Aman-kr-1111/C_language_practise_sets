// Input 2 number and calculate subtraction using function
#include <stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter your 1st number : ");
    scanf("%d", &num1);
    printf("Enter your 2nd number : ");
    scanf("%d", &num2);
    int sub(int, int);
    result = sub(num1, num2);
    printf("%d - %d = %d", num1, num2, result);
    return 0;
}
int sub(int x, int y)
{
    return x - y;
}
// Input 2 number and calculate addition using function
#include <stdio.h>
int main()
{
    int num1, num2, add;
    printf("Enter your 1st number : ");
    scanf("%d", &num1);
    printf("Enter your 2nd number : ");
    scanf("%d", &num2);
    int sum(int, int);     // Function declaration
    add = sum(num1, num2); // Fuction call
    printf("%d + %d = %d", num1, num2, add);

    return 0;
}
int sum(int a, int b) // Function defination
{
    int c;
    c = a + b;
    return c;
}
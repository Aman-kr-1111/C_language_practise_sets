// Input height and base calculate area of triangle
#include <stdio.h>
int main()
{

    float result, h, b;
    printf("Enter your height of triangle : ");
    scanf("%f", &h);
    printf("Enter your base of triangle : ");
    scanf("%f", &b);
    float area(float, float);
    result = area(h, b);
    printf("The area of triangle is : %.2f", result);
    return 0;
}
float area(float x, float y)
{
    return (x * y) / 2;
}
// Input radius and calculate area of circle by function
#include <stdio.h>
int main()
{
    int radius;
    float result;
    printf("Enter your radius : ");
    scanf("%d", &radius);
    float area(int);
    result = area(radius);
    printf("Your radius is %d and area of circle is : %.2f", radius, result);
    return 0;
}
float area(int r)
{
    float c;
    c = 3.14 * r * r;
    return c;
}
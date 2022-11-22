// Input value for meter and convert its cm to km
#include <stdio.h>
int main()
{
    int num;
    float result;
    printf("Enter your number : ");
    scanf("%d", &num);
    float convert(int);
    result = convert(num);
    printf("Your number is %d cm and its conversion is %f km", num, result);
    return 0;
}
float convert(int x)
{
    float new_unit;
    new_unit = (float)x / (100 * 1000);
    return new_unit;
}
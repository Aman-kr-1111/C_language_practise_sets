// Input P,R and T ,calculate the simple-interest
#include <stdio.h>
int main()
{
    float p, r, t, result;
    ;

    printf("Enter your principal amount : ");
    scanf("%f", &p);
    printf("Enter your rate : ");
    scanf("%f", &r);
    printf("Enter your time : ");
    scanf("%f", &t);
    float si(float, float, float);
    result = si(p, r, t);
    printf("Your Simple_interest is : %.2f", result);
    return 0;
}
float si(float x, float y, float z)
{
    float simple_interest;
    simple_interest = (x * y * z) / 100;
    return simple_interest;
}
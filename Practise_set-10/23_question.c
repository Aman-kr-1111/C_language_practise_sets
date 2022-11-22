// Input radius , height and calculate volume if cylinder
#include <stdio.h>
int main()
{
    float radius, height;
    float result;
    printf("Enter your radius of cylinder : ");
    scanf("%f", &radius);
    printf("Enter your height of cylinder : ");
    scanf("%f", &height);
    float volume(float, float);
    result = volume(radius, height);
    printf("Your radius %.2f , height %.2f and volume of cylinder is %.2f", radius, height, result);
    return 0;
}
float volume(float r, float h)
{
    float vol;
    vol = 3.14 * r * r * h;
    return vol;
}
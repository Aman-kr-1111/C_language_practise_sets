// Input a number and print the value of 1^2,2^2,3^2 ...,n^2
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        printf(" %d ",i*i);
    }
    
    return 0;
}
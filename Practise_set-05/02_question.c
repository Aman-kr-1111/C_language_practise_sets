// Input a number and calculate sum of 1 to that number
#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter your number : ");
    scanf("%d",&num);
    i=1;
    while (i<=num)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of 1 to %d is : %d",num,sum);
    
    return 0;
}
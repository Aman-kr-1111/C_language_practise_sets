// Input a number and calculate the factorial of that number
#include<stdio.h>
int main()
{
    int i,num,multi=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    i=num;
    while (i>=1)
    {
        multi = multi * i;
        i--;
    }
    printf("The Factorial of %d is : %d",num,multi);
        
    return 0;
}
// Input a number and print n,n-1,n-2 ...,3,2,1
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    for (int i = num; i >=1; i--)
    {
        printf(" %d ",i);
    }
    
    return 0;
}
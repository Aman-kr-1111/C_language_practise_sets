// Input a number and print 2,4,6 ...,n
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    for (int i = 2; i <= num; i+=2)
    {
        printf(" %d ",i);
    }
    
    return 0;
}
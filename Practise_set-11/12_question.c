// Input 10 data and find a particular data
#include <stdio.h>
int main()
{
    int num[10], search_num, found = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Input your data in num[%d] : ", i);
        scanf("%d", &num[i]);
    }
    printf("Enter your search number : ");
    scanf("%d", &search_num);
    for (int j = 1; j <= 10; j++)
    {
        if (num[j] == search_num)
        {
            found++;
        }
    }
    if (found > 0)
    {
        printf("Your search number %d is avilable in this array", search_num);
    }
    else
    {
        printf("Your search number %d is not a avilable in this array", search_num);
    }

    return 0;
}
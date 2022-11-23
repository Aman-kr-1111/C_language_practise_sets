// Input 10 number in 1st-array and 10 number in another array then calculate the sum of both array into 3rd-array
#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], arr3[10];
    for (int i = 1; i <= 10; i++)
    {
        printf("Input your data in arr1[%d] : ", i);
        scanf("%d", &arr1[i]);
    }
    for (int j = 1; j <= 10; j++)
    {
        printf("Input your data in arr2[%d] : ", j);
        scanf("%d", &arr2[j]);
    }

    for (int k = 1; k <= 10; k++)
    {
        printf("\nThe sum of : %d + %d = %d", arr1[k], arr2[k], arr1[k] + arr2[k]);
    }

    return 0;
}
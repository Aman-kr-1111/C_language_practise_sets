// Input marks of 3 subjects print pass if every subject 50 is greater than otherwise fail.
#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter Your marks of 1st subject : ");
    scanf("%d", &s1);
    printf("Enter Your marks of 2nd subject : ");
    scanf("%d", &s2);
    printf("Enter Your marks of 3rd subject : ");
    scanf("%d", &s3);
    if (s1 > 50)
    {
        if (s2 > 50)
        {
            if (s3 > 50)
            {
                printf("Your 1st marks %d , 2nd marks %d and 3rd marks %d then you are pass", s1, s2, s3);
            }
            else
            {
                printf("Your 1st marks %d , 2nd marks %d and 3rd marks %d then you are fail", s1, s2, s3);
            }
        }
        else
        {
            printf("Your 1st marks %d , 2nd marks %d and 3rd marks %d then you are fail", s1, s2, s3);
        }
    }
    else
    {
        printf("Your 1st marks %d , 2nd marks %d and 3rd marks %d then you are fail", s1, s2, s3);
    }

    return 0;
}
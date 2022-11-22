// Print all primes number between 1 to 100
#include <stdio.h>
int main()
{
    int prime();
    prime();
    return 0;
}
int prime()
{

    for (int i = 1; i <= 100; i++)
    { // Error in this code
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf(" %d ", i);
        }
    }
}
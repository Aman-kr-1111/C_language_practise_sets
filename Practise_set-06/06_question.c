// Print pattern
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E

#include <stdio.h>
int main()
{

    for (int i = 65; i <= 69; i++)
    {
        for (int j = 65; j <= 69; j++)
        {
            printf(" %c ", j);
        }
        printf("\n");
    }

    return 0;
}

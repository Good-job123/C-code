#include <stdio.h>

int main()
{
    int i, j, k;
    for (int i = 1; i <= 13; i++)
    {
        if (i < 7)
        {
            for (int k = 6; k >= i; k--)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else if (i > 7)
        {
            for (int k = 1; k <= i - 7; k++)
            {
                printf(" ");
            }
            for (int j = 13 - 2 * (i - 7); j >= 1; j--)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
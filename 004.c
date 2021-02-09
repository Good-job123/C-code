#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i < 9; i++)
    {
        for (j = 1; j < 9; j++)
        {
            if ((i + j) % 2 == 0)
                printf("%c%c", '\xA1', '\xF6'); //白格161,264
            else
            {
                printf("  "); //黑格
            }
        }
        printf("\n");
    }

    return 0;
}
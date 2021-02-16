#include <math.h>

int main()
{
    int n = 90;
    scanf("%d", &n);
    int i = 0;
    printf("%d=", n);
    for (i = 2; i <= n; i++)
    {

        while (n % i == 0)
        {
            printf("%d", i);
            n = n / i;
            if (n != 1)
                printf("*");
        }
    }
    return 0;
}

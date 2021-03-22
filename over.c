#include <math.h>
#include <stdio.h>
int main()
{
  int n, r, a[100], s, i;
  while (scanf("%d%d", &n, &r) != EOF)
  {
    s = n, n = abs(n), i = 0;
    while (n)
    {
      a[i] = n % r;
      i++;
      n = n / r;
    }
    for (i = i - 1; i >= 0; i--)
    {
      if (s < 0)
      {
        printf("-");
        s = 0;
      }
      if (a[i] < 10)
      {
        printf("%d", a[i]);
      }
      if (a[i] >= 10)
      {
        printf("%X", a[i]);
      }
    }
    printf("\n");
  }
}
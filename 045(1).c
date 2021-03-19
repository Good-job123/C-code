#include <stdio.h>

int main()
{
  int i, n;
  while (~scanf("%d", &n) && n)
  {
    double sum = 0;
    for (i = 2; i <= n; i++)
    {
      sum += 2.0 * (n - i + 1) / i;
    }
    printf("%.2lf\n", sum + n);
  }
  return 0;
}
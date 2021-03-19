#include <stdio.h>

int main()
{
  int n = 0;
  while (~scanf("%d", &n) && n)
  {
    double total = 0;
    for (int i = 1; i <= n; i++)
    {
      double sum = 0;
      for (int j = 1; j <= n - i + 1; j++)
      {
        sum += 1.0 / j;
      }
      sum = 2 * sum - 1;

      total += sum;
    }
    printf("%.2lf\n", total);
  }
  return 0;
}
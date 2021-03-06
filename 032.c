#include <stdio.h>

int zhan_gcd(long int a, long int b)
{
  return (a % b ? zhan_gcd(b, a % b) : b);
}

int main()
{
  int i = 0;
  int n = 0;
  int k = 0;
  while (scanf("%d%d", &n, &k) != EOF)
  {
    for (i = 0; i < n - 1; i++)
    {
      int x = 0;
      scanf("%d", &x);
      k = k * x / zhan_gcd(k, x);
    }
    printf("%d\n", k);
  }
  return 0;
}

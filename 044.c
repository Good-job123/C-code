#include <stdio.h>

int main()
{
  int n, m;
  while (~scanf("%d%d", &n, &m))
  {
    int ret = 1, b;
    while (m--)
    {
      if (b = (ret *= 10) / n)
        ret = ret % n;
    }

    printf("%d\n", b % 10);
  }
  return 0;
}
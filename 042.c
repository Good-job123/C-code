#include <stdio.h>

int main()
{
  int a, b;
  while (~scanf("%d%d", &a, &b) && a && b)
  {
    int ret = 1;
    while (b--)
    {
      ret = ret * a;
      ret %= 1000;
    }
    printf("%d\n", ret);
  }
  return 0;
}

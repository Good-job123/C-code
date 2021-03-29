#include <stdio.h>

int a[100] = {0};
int i = 0;

int main()
{
  int n = 0;
  scanf("%d", &n);
  for (i = 0; n > 0; i++)
  {
    a[i] = n % 2;
    n /= 2;
  }
//循环结束后i+1了，所以遍历时将1减去。
  for (--i; i >= 0; i--)
  {
    printf("%d", a[i]);
  }

  return 0;
}

#include <stdio.h>

int f[1005] = {0};

int func(int n)
{
  if (f[n] != 0)
    return f[n];

  int s = 1; //本身也算一个
  for (int i = 1; i <= n / 2; i++)
    s = s + func(i);

  f[n] = s;

  printf("%d", f[n]);

  return s;
}

int main()
{
  int n;
  scanf("%d", &n)；
  printf("%d\n", func(n));
  return 0;
}


#include <stdio.h>

int total = 0;

void func(int n)
{
  total++;
  if (n == 1)
    return;
  for (int i = 1; i <= n / 2; i++)
    func(i);
}

int main()
{
  int n;
  scanf("%d", &n);
  func(n);
  printf("%d", total);

  return 0;
}


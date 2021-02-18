#include <stdio.h>

void peach_amount(int n)
{
  int count = 1;
  while (count < 10)
  {
    n = (n + 1) * 2;
    count++;
  }
  if (n >= 10)
    printf("%d\n", n);
}

int main()
{
  int value = 1;
  peach_amount(value);
  return 0;
}

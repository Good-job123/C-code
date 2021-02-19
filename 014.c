#include <stdio.h>

void sum_up(int value)
{
  int v = value;
  int n = 1;
  int m = 2;
  double sum = 0;
  while (value > 0)
  {
    int tmp = 0;
    sum = sum + 1.0 * m / n;
    tmp = m;
    m = m + n;
    n = tmp;
    value--;
  }
  printf("这个数列的前%d项之和%lf\n", v, sum);
}

int main()
{
  int data = 20;
  sum_up(data);
  return 0;
}
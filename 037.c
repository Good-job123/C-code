#include <assert.h>
#include <stdio.h>

int go_ways(int m)
{
  int t = m - 1;
  if (t == 1 || t == 2)
    return t;
  else
  {
    return (2 * t - 3); //(t-1)+(t-2)
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  while (n--)
  {
    int m = 0;
    scanf("%d", &m);
    assert(m <= 40);
    printf("%d\n", go_ways(m));
  }
  return 0;
}
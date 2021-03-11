#include <assert.h>
#include <stdio.h>

int go_ways(int m)
{
  if (m == 1 || m == 2)
    return m;
  else
  {
    return (go_ways(m - 1) + go_ways(m - 2));
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
    printf("%d\n", go_ways(m - 1));
  }
  return 0;
}
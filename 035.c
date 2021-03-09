
#include <assert.h>
#include <stdio.h>

int main()
{
  int n = 0;
  while (scanf("%d", &n) != EOF)
  {
    while (n--)
    {
      double a, b, c;
      scanf("%lf%lf%lf", &a, &b, &c);
      assert(a < 1000 && b < 1000 && c < 1000);
      if ((a + b > c) &&
          (a + c > b) &&
          (b + c > a))
        printf("YES\n");

      else
        printf("NO\n");
    }
  }
  return 0;
}
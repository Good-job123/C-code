#include <stdio.h>

int main()
{
  long long x, y;
  while (~scanf("%llx%llx", &x, &y))
  {
    long long sum = x + y;
    if (sum >= 0)
      printf("%llX\n", sum);
    else
      printf("-%llX\n", -sum);
  }
  return 0;
}

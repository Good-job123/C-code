#include <stdio.h>

int main()
{
  int n = 0;
  while (scanf("%d", &n) != EOF)
  {
    while (n--)
    {
      int i = 0;

      int a[3] = {0};
      int b[3] = {0};
      int c[3] = {0};
      for (i = 0; i < 3; i++)
      {
        scanf("%d", &a[i]);
      }

      for (i = 0; i < 3; i++)
      {
        scanf("%d", &b[i]);
      }
      int in_sec = (a[2] + b[2]) / 60;
      int in_min = (a[1] + b[1] + in_sec) / 60;
      c[2] = (a[2] + b[2]) % 60;
      c[1] = (a[1] + b[1]) % 60 + in_sec;
      c[0] = a[0] + b[0] + in_min;

      printf("%d %d %d\n", c[0], c[1], c[2]);
    }
  }
  return 0;
}
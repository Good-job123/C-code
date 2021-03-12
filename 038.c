#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  while (n--)
  {
    int cnt = 0;
    int ch = 0;
    int f0 = 0, f1 = 0, f2 = 0, f3 = 0;
    getchar();
    while ((ch = getchar()) != '\n')
    {
      cnt++;
      if (ch >= '0' && ch <= '9')
      {
        f1 = 1;
      }
      else if (ch >= 'a' && ch <= 'z')
      {
        f2 = 1;
      }
      else if (ch >= 'A' && ch <= 'Z')
      {
        f3 = 1;
      }
      else
      {
        f0 = 1;
      }
    }
    if (cnt >= 8 && cnt <= 16 && (f1 + f2 + f3 + f0) >= 3)
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}

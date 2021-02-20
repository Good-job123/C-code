//思路二

#include <stdio.h>

void f(int n)
{
  char ch;
  if (n >= 1)
  {
    ch = getchar();
    f(n - 1);
  }
  else
    return;
  putchar(ch);
}

int main()
{

  f(5);
  printf("\n");
  return 0;
}
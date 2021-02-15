#include<stdio.h>

int main()
{
  int n = 15;
  int tmp = 0;
  //scanf("%d",&n);
  while (n > 0)
  {
    tmp = n % 10;
    n = n / 10;
    printf("%d ", tmp);
  }
  return 0;
}
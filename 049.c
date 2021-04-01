#include <stdio.h>

int func(int n)
{
  if (n == 1 || n == 2)
  {
    return n;
  }
  else
  {
    if (n % 2 == 0)
      return (func(n - 1) + func(n / 2));
    else
      return func(n - 1);  //2n和2n-1个个数相同
  }
}

int main()
{
  int n;
  scanf("%d", &n)；
  printf("%d\n", func(n));
  return 0;
}

————————————————
版权声明：本文为CSDN博主「and whatnot」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/and_what_not/article/details/115313904
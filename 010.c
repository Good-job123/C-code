#include <stdio.h>

int Is_wdata(int n)
{
  int i = 0;
  int sum = 1;//每个数都含有因子1
  for (i = 2; i < n; i++)//获取（除去1和本身）其他因子
  {
    if (n % i == 0)//判断是否位因子
    {
      sum = sum + i;//求真因子之和
    }
  }
  return sum;
}

int main()
{
  int i = 0;
  int k = 0;
  for (i = 2; i < 1000; i++)
  {
    k = Is_wdata(i);
    if (i == k)
      printf("%d ", i);
  }

  return 0;
}
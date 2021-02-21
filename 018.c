#include <stdio.h>

void print(int value)
{
  int n = 0;
  while (value > 0)
  {
    n = value % 10;
    value = value / 10;
    printf("%d", n);
  }
}

int count_digital(int value)
{
  int count = 0;
  while (value > 0)
  {
    value = value / 10;
    count++;
  }
  return count;
}

int main()
{
  int data = 0;
  printf("输入不超过5位数的正整数：\n");
  scanf("%d", &data);
  int k = count_digital(data);
  printf("是%d位数\n", k);
  printf("逆序数：");
  print(data);
  printf("\n");

  return 0;
}
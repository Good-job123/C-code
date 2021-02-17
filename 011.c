#include <stdio.h>

void process(double h, int t)
{
  double H = h;//将原始高度保留
  double sum = 0;
  while (t > 0)
  {
   // 1、2、3、4...
 //100、50、25、12.5
    sum = sum + h;//每次落地前高度之和。
    h = h / 2;
    t--;
  }
  printf("第H次下落共经过是：%lf米\n", 2 * sum - H);//除第一次以外每一次都是先弹起，再下落
  printf("第H次反弹的高度是：%lf米\n", h);
}

int main()
{
  int hight = 100;
  int times = 10;
  process(hight, times);
  return 0;
}
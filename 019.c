
#include <stdio.h>

void menu()
{
  printf("###################\n");
  printf("##1.add    2.sub###\n");
  printf("##3.mul    4.div###\n");
  printf("##    0.exit     ##\n");
}

int Add(int x, int y)
{
  return (x + y);
}
int Sub(int x, int y)
{
  return (x - y);
}
int Mul(int x, int y)
{
  return (x * y);
}
int Div(int x, int y)
{
  return (x / y);
}

int main()
{
  int input = 0;
  int x = 0;
  int y = 0;
  do
  {
    menu();
    printf("请选择:>\n");
    scanf("%d", &input);
    //pfarr是一个函数指针数组
    int (*pfarr[])(int x, int y) = {0, Add, Sub, Mul, Div};//类型是函数指针，类型名是数组
    if (input >= 1 && input <= 4)
    {
      printf("请输入了两个操作数:>\n");
      scanf("%d%d", &x, &y);
      int ret = (*pfarr[input])(x, y);
      printf("%d\n", ret);
    }
    else if (input == 0)
    {
      printf("退出\n");
    }
    else
    {
      printf("选择错误\n");
    }
  } while (input);

  return 0;
}
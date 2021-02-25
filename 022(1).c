#include <stdio.h>、

int main()
{
  printf("请输入首个小写字母:\n");
  char week;
  scanf("%c", &week);
  switch (week)
  {
    char we;
  case 'm':
    printf("mon");
    break;
  case 'w':
    printf("wed");
    break;
  case 'f':
    printf("fri");
    break;

  case 's':
    getchar();
    printf("again:\n");
    scanf("%c", &we);
    if (we == 'a')
      printf("sat");
    else if (we == 'u')
      printf("sun");
    else
      printf("err");
    break;

  case 't':
    getchar();
    printf("again:\n");
    scanf("%c", &we);
    if (we == 'u')
      printf("tue");
    else if (we == 'h')
      printf("thu");
    else
      printf("err");
    break;

  default:
    printf("err\n");
    break;
  }
  return 0;
}
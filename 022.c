#include <stdio.h>

int main()
{
  char w;
  printf("inupt frist letter：\n");
  scanf(" %c", &w);
  if (w == 'm')
    printf("mon\n");
  else if (w == 'w')
    printf("wed\n");
  else if (w == 'f')
    printf("thu\n");
  else if (w == 't')
  {
    getchar(); //将'\0'剔除
    printf("input again:\n");
    scanf("%c", &w);
    if (w == 'u')
      printf("tue");
    else if (w == 'h')
      printf("thu");
    else
      printf("err\n");
  }
  else if (w == 's')
  {
    getchar();
    scanf("%c", &w);
    if (w == 'a')
      printf("sat");
    else if (w == 'u')
      printf("sun");
    else
      printf("err\n");
  }
  else
    printf("err");
  return 0;
}
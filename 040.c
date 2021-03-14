#include <stdio.h>
#include <string.h>

int let_and_num(int let)
{
  if (let >= 'A' && let <= 'Z')
    return (let - 'A' + 1);
  if (let >= 'a' && let <= 'z')
    return ('a' - let - 1);
}

int main()
{
  int n = 0;
  int num = 0;
  char let = 0;
  scanf("%d", &n);

  while (n--)
  {
    getchar();//去除换行符，防止%c接收
    scanf("%c %d", &let, &num);

    printf("%d\n", let_and_num(let) + num);
  }
  return 0;
}

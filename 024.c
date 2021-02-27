
#include <stdio.h>

int main()
{
  int money = 20;
  // scanf("%d", &money);
  int total = money;
  int drink = money;
  int empty = drink;
  while (empty >= 2)
  {
    drink = empty / 2;
    total += drink;
    empty = drink + empty % 2;
  }
  printf("%d\n", total);
  return 0;
}
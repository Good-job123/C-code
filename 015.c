#include <stdio.h>

int factorial(int value)
{
  if (value <= 1)
    return 1;
  else
  {
    return value * factorial(value - 1);
  }
}

int main()
{
  int data = 4;
  //scanf("%d", &data);
  int i = 0;
  int sum = 0;
  for (i = 1; i <= data; i++)
  {
    sum = sum + factorial(i);
  }
  printf("%d\n", sum);
  return 0;
}
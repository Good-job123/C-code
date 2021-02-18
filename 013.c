#include <stdio.h>

int main()

{
  char i, j, k; //a,b,c
  for (i = 'x'; i <= 'z'; i++)
  {
    for (j = 'x'; j <= 'z'; j++)
    {
      if (i != j)
      {
        for (k = 'x'; k <= 'z'; k++)
        {
          if (i != k && j != k)
          {
            if (k != 'x' && k != 'z' && i != 'x')
            {
              printf("a-%c,b-%c,c-%c\n", i, j, k);
              goto over;
            }
          }
        }
      }
    }
  }
over:
  return 0;
}
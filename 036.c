
#include <stdio.h>

int sum_up(int m )
{
  int i = 0;
  int sum = 1;
  for (i = 2; i < m; i++)
      {
        if (m % i == 0 )
          sum += i;
      }
      return sum;

}
int main()
{
  int n = 0;
  while (scanf("%d", &n) != EOF)
  {
    while (n--)
    {
      
      int m1 = 0;
      int m2 = 0;
      scanf("%d%d", &m1,&m2);
      if (m2 ==  sum_up(m1) && m1 == sum_up(m2))
      {
        printf("YES\n");
      }
      else
      {
        printf("NO\n");
      }
    }
  }

  return 0;
}

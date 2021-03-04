
#include <stdio.h>

int find_Num(int aa[3][3], int k, int *row, int *col)
{
  int x = *row - 3;
  int y = *col - 1;
  while (y >= 0 && x < *row)
  {
    if (aa[x][y] < k)
    {
      x++;
    }
    if (aa[x][y] > k)
    {
      y--;
    }
    if (aa[x][y] == k)
    {
      *row = x;
      *col = y;
      return 1;
    }
  }

  return 0;
}

int main()
{
  int k = 7;
  int x = 3;
  int y = 3;
  int aa[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int ret = find_Num(aa, k, &x, &y);
  if (ret == 1)
  {
    printf("Yes\n");
    printf("%d,%d\n", x, y);
  }
  else
  {
    printf("No\n");
  }
  return 0;
}
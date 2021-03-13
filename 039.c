#include <stdio.h>

int main()
{
  int width = 0;
  int height = 0;
  while (scanf("%d%d", &width, &height) != EOF && width > 0 && height < 75)
  {

    for (int j = 0; j < height + 2; j++)
    {
      for (int i = 0; i < width + 2; i++)
      {
        if (j == 0 || j == height + 1)
        {
          //把框架摆好
          //+---+

          //+---+
          if (i == 0 || i == width + 1)
            printf("+");
          else
            printf("-");
        }
        //“见缝插针”
        else if (i == 0 || i == width + 1)
          printf("|");
        else
          printf(" ");
      }

      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
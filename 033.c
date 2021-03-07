
#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
  int len = strlen(str);
  char tmp = str[0];
  str[0] = str[len - 1];
  str[len - 1] = '\0';
  if (strlen(str + 1) >= 2)
    reverse(str + 1);
  str[len - 1] = tmp;
}

int main()
{
  int n = 0;
  char str[100] = {0};
  while (scanf("%d", &n) != EOF)
  {
    while (n--)
    {
      scanf("%s", str);
      char ass = *str;
      reverse(str);
      if (ass == *str)
        printf("yes\n");
      else
      {
        printf("No\n");
      }
    }
  }
  return 0;
}
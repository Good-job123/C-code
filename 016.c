//思路一

#include <string.h>

int my_strlen(char *str)
{
  int count = 0;
  while (*str != '\0')
  {
    count++;
    str++;
  }
  return count;
}

void reverse(char *str)
{
  int len = my_strlen(str);
  char tmp = str[0];
  str[0] = str[len - 1];
  str[len - 1] = '\0';
  if (my_strlen(str + 1) >= 2)
    reverse(str + 1);
  str[len - 1] = tmp;
}

int main()
{
  char str[] = "abcefg";
  reverse(str);
  printf("%s ", str);
  return 0;
}
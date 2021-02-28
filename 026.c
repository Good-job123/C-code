
#include <stdio.h>

char *my_strcpy(char *dest, const char *src) //返回类型是char*
{
  char *p = NULL; //指针须初始化,
  if (dest == NULL || src == NULL)
  {
    return NULL;
  }

  p = dest;
  //将目标串的地址存放在p地址中
  while ((*dest = *src) != '\0') //将src中的字符串传给dest
  {
    dest++;
    src++;
  }
  return p;
}
int my_strlen(const char *p)
{
  int count = 0;
  while (*p != '\0')
  {
    p++;
    count++;
  }
  return count;
}

int main()
{
  char arr[] = "abcde";
  char str[20] = {0};
  my_strcpy(str, arr);
  printf("%s\n", str);

  int len = my_strlen(str);
  printf("%d\n", len);
  return 0;
}


#include <stdio.h>

int main()
{
  int a[5] = {1, 2, 3, 2, 1};
  int right = sizeof(a) / sizeof(a[0]) - 1;
  int left = 0;

  while (left <= right)
  {
    if (a[right] == a[left])
    {
      left++;
      right--;
    }
    else
    {
      break;
    }
  }
  if (left > right)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }

  return 0;
}
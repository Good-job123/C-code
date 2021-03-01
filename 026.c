#include <stdio.h>

void print(int arr[], int sz)
{
  int i = 0;
  for (i = 0; i < sz; i++)
    printf("%d ", arr[i]);
}

int *move(int arr[], int k, int sz)
{
  int j = 0;
  for (j = k; j < sz; j++)
  {
    arr[j] = arr[j + 1];
  }
  return arr;
}

int main()
{
  int i = 0;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int sz = sizeof(arr) / sizeof(arr[0]);
  for (i = 0; i < sz; i++)
  {
    if (arr[i] % 2 == 0) //判断是否为偶数
    {
      arr[sz] = arr[i]; //把i的值放在arr[sz-1]后面
      move(arr, i, sz); //i后面的值依次往前移动一位
    }
  }

  print(arr, sz);
  return 0;
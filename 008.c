#include<stdio.h>


//方法一
// int bits(int n, int m)
// {
//   int i = 0;
//   int count = 0;
//   int x = 0;
//   int y = 0;
//   for (i = 0; i < 32; i++)
//   {
//     x = (n >> i) & 1;
//     y = (m >> i) & 1;
//     if ((x ^ y) == 1)
//     {
//       count++;
//     }
//   }

//   return count;
// }

// int main()
// {
//   int n = 1999;
//   int m = 2299;
//   //scanf("%d%d", &n, &m);
//   int differ = bits(n, m);
//   printf("%d\n", differ);

//   return 0;
// }

//方法二（优化）
int one_bit(int value)
{
  int count = 0;
  while (value)
  {
    value = value & (value - 1);
    count++;
  }
  return count;
}

int main()
{
  int n = 1999;
  int m = 2299;
  //scanf("%d%d", &n, , &m);
  int k = one_bit(n ^ m);
  printf("%d\n", k);
  return 0;
}

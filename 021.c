
#include <stdio.h>  /* printf */
#include <stdlib.h> /* qsort */

int values[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int sz = sizeof(values) / sizeof(values[0]);

int compare(const void *a, const void *b)
{
  // {
  //   printf("%d,%d\n", *(int *)a, *(int *)b);
  // }
  return (*(int *)a - *(int *)b);
}

int main()
{
  int n = 0;
  qsort(values, sz, sizeof(int), compare);
  for (n = 0; n < sz; n++)
    printf("%d ", values[n]);
  return 0;
}
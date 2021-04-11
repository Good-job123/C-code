#include <iostream>

using namespace std;

#define size 7

int p[size] = {2, 5, 6, 4, 5, 8, 7};
int s[size][size] = {0};

int bfs(int i, int j)
{
  if (s[i][j] != 0)
    return s[i][j];

  if (i == j)
    return 0;

  int ans = bfs(i, i) + bfs(i + 1, j) + p[i - 1] * p[i] * p[j];
  for (int k = i; k < j; k++)
  {
    int tmp = bfs(i, k) + bfs(k + 1, j) + p[i - 1] * p[k] * p[j];
    if (tmp < ans)
      ans = tmp;

    s[i][j] = ans;
  }
  return s[i][j];
}

int main()
{
  cout << "最少次数:" << bfs(1, size - 1) << endl;
  return 0;
}
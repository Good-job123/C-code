#include <iostream>

using namespace std;

int a[1005];

void dfs(int k)
{
  int i = 0;
  for (i = k; i >= 1; i--)
    cout << a[i];

  cout << endl;

  for (i = 1; i <= a[k] / 2; i++)
  {
    a[k + 1] = i;

    dfs(k + 1);
  }
}

int main()
{
  int n;
  cin >> n;
  a[1] = n;
  dfs(1);

  return 0;
}
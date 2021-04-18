#include <cstring>
#include <iostream>

using namespace std;

int m, num = 0;
int a[1005][1005];
int q[1005][3];
bool p[1005][1005] = {0};
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int x, int y)
{
  p[x][y] = true;
  num++;
  int front = 0;
  int rear = 1;

  while (front < rear)
  {
    front++;
    for (int i = 0; i <= 3; i++)
    {
      int xx = q[front][1] + dx[i];
      int yy = q[front][2] + dy[i];
      if (xx >= 0 && xx <= m + 1 
      && yy >= 0 && yy <= m + 1 
      && a[xx][yy] == 0 && p[xx][yy] == false)
      {
        rear++;
        q[rear][1] = xx;
        q[rear][2] = yy;
        p[xx][yy] = true;
        num++;
      }
    }
  }
}

int main()
{
  int i, j;
  cin >> m;
  memset(a, 0, sizeof(a));
  //注意：初始化i要从1开始
  for (i = 1; i <= m; i++)
    for (j = 1; j <= m; j++)
    {
      cin >> a[i][j];
      if (a[i][j] == 1)
        num++;
    }

  for (int i = 0; i < m + 2; i++)
  {
    //第一行和最后一行置为0
    a[0][i] = 0;
    a[m + 1][i] = 0;
    //第一列和最后一列置为0
    a[i][0] = 0;
    a[i][m + 1] = 0;
  }
  bfs(0, 0);
  cout << (m + 2) * (m + 2) - num;
  return 0;
}

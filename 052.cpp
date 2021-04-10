#include <iostream>

using namespace std;

void Print(int a[], int right)
{
  for (int i = 0; i < right; i++)
    cout << a[i] << " ";
  cout << endl;
}

void Reverse(int a[], int left, int right)
{
  int mid = (right - left) / 2;
  for (int i = 0; i <= mid; i++)
  {
    int tmp = a[left + i];
    a[left + i] = a[right - i];
    a[right - i] = tmp;
  }
}

bool Exchange(int a[], int n, int m, int max_size)
{
  if (n + m > max_size)
    return false;
  Reverse(a, 0, n - 1);
  Reverse(a, n, m + n - 1);
  Reverse(a, 0, n + m - 1);
  return true;
}

int main()
{
  int a[10] = {1, 2, 3, 4, 5, 6, 7};
  //Print(a, 7);

  Exchange(a, 3, 4, 7);
  Print(a, 7);

  return 0;
}
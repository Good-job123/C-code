#include <stdio.h>
#include <windows.h>

int main()
{
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
  printf("我绿了吗~~~\n");

  return 0;
}
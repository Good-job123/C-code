#include <stdio.h>

int main()
{
    int value = 25;
    //scanf("%d", &value);
    printf("偶数序列>");
    for (int i = 31; i >= 1; i -= 2)
    {
        printf("%d", (value >> i) & 1);
    }
    printf("\n");

    printf("奇数序列>");
    for (int j = 30; j >= 0; j -= 2)
    {
        printf("%d", (value >> j) & 1);
    }
    return 0;
}
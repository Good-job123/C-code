#include <stdio.h>
#include <string.h>

int left_move(char *arr, char *ass)
{
    int len = strlen(arr);
    int lens = strlen(ass);

    if (len != lens)
        return 0;

    strncat(arr, arr, len);
    char *ret = strstr(arr, ass);
    if (ret != NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char arr[30] = "abcdef";
    char ass[] = "cdefab";
    int tmp = left_move(arr, ass);
    if (tmp == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
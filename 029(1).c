#include <assert.h>
#include <stdio.h>
#include <string.h>

void reserve(char *p, char *q)
{
    assert(p != NULL);
    assert(q != NULL);
    while (p < q)
    {
        char tmp = *p;
        *p = *q;
        *q = tmp;
        p++;
        q--;
    }
}

void left_move(char *arr, int k)
{
    int len = strlen(arr);
    reserve(arr, arr + k - 1);
    reserve(arr + k, arr + len - 1);
    reserve(arr, arr + len - 1);
}

int main()
{
    char arr[] = "abcdef";
    left_move(arr, 2);
    printf("%s", arr);
    return 0;
}

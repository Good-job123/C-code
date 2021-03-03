
#include <stdio.h>
#include <string.h>

void Left_move(char *arr, int k)
{
    int i = 0;
    int j = 0;
    int len = strlen(arr);

    for (i = 0; i < k; i++)
    {
        char p = *arr;
        for (j = 0; j < len - 1; j++)
        {
            *(arr + j) = *(arr + j + 1);
        }
        *(arr + len - 1) = p;
    }
}
int main()
{
    char arr[] = "ABCDEFGH";
    Left_move(arr, 2);
    printf("%s", arr);

    return 0;
}
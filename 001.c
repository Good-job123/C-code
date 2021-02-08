#include<stdio.h>

int count_one_bits(unsigned int data)
{
    int count = 0;
    while (data)
    {
        data = data & (data - 1);
        count++;
    }
    return count;
}

int main()
{
    int value = 0;
    scanf("%d", &value);
    int val = count_one_bits(value);
    printf("%d\n", val);
    return 0;
}
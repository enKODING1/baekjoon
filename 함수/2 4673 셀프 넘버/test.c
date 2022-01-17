#include <stdio.h>
#include <stdlib.h>

int numCount(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int *divNumber(int num)
{
    int ten = 1;
    int num_count = 0;
    int num_len = numCount(num);
    int *arr = (int *)malloc(sizeof(int) * num_len);

    for (int i = 0; i < num_len; i++)
    {
        ten *= 10;
    }

    while (num_len != num_count)
    {
        num %= ten;
        ten /= 10;
        arr[num_count] = num / ten;

        num_count++;
    }

    return arr;
}

int main(void)
{
    int num = 23012;
    int *value = divNumber(num);
    for (int i = 0; i < sizeof(value) / sizeof(int); i++)
    {
        printf("[%d] ", value[i]);
    }

    return 0;
}
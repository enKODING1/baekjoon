#include <stdio.h>
#include <stdlib.h>

double calc(int num1, int ptr)
{
    return (double)num1 / (double)ptr * 100;
}

void solve(int *data, int max, int len)
{
    double _data = 0.0;
    for (int i = 0; i < len; i++)
    {
        _data += calc(data[i], max);
    }
    printf("%f", _data / len);
}

int maxValue(int *data, int len)
{
    int max = -99999;
    for (int i = 0; i < len; i++)
    {
        if (data[i] > max)
        {
            max = data[i];
        }
    }

    return max;
}

int main(void)
{
    int size = 0;
    int max_value = 0;

    scanf("%d", &size);
    int *data = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }
    max_value = maxValue(data, size);
    solve(data, max_value, size);
    free(data);
    return 0;
}
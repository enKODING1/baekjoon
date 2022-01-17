#include <stdio.h>

#define MAX_SIZE 100

int abs(int data)
{
    if (data < 0)
    {
        return data * -1;
    }
    else
    {
        return data;
    }
}

void solve(int *data, int size)
{
    int total = 0;
    int num1 = 0, num2 = 0, num3 = 0;
    for (int i = 0; i < size; ++i)
    {
        num1 = abs(data[i] - data[i + 1]);
        num2 = 360 - data[i] + data[i + 1];
        num3 = 360 + data[i] - data[i + 1];
        if (num1 < num2)
        {
            if (num3 < num1)
            {
                total += num3;
            }
            else
            {
                total += num1;
            }
        }
        else
        {
            total += num2;
        }
    }
    printf("%d", total);
}

int main(void)
{
    int num = 0;
    int start = 0;
    scanf("%d", &num);
    scanf("%d", &start);
    int data[MAX_SIZE] = {
        0,
    };
    data[0] = start;
    for (int i = 0; i < num; ++i)
    {
        scanf("%d", &data[i + 1]);
    }
    solve(data, num);

    return 0;
}

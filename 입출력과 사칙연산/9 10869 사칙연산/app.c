#include <stdio.h>

void cal(int num1, int num2);

int main(void)
{
    int num1 = 0, num2 = 0;
    scanf("%d %d", &num1, &num2);
    cal(num1, num2);
    return 0;
}

void cal(int num1, int num2)
{
    int data[4] = {
        0,
    };

    int increase = 10;

    for (int i = 0; i < sizeof(data) / sizeof(int); i++)
    {
        data[i + 1] = num2 % increase - data[i];
        if (increase > 100)
        {
            data[i + 1] -= data[i - 1];
        }
        increase *= 10;
    }

    int result = 0;
    int sum = 0;
    increase = 1;

    for (int i = 0; i < sizeof(data) / sizeof(int) - 1; i++)
    {
        result = num1 * data[i + 1];
        printf("%d\n", result / increase);
        sum += result;
        increase *= 10;
    }

    printf("%d", sum);
}

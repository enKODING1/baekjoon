#include <stdio.h>
#include <string.h>

#define SIZE 11

void solve(char *str)
{
    int loop = strlen(str);
    int loop_count = 0;

    char data_check[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < loop; j++)
        {
            if (str[j] == data_check[i])
            {
                loop_count += 1;
            }
        }
        printf("%d\n", loop_count);
        loop_count = 0;
    }
}

void changeStr(int num)
{
    char str[SIZE];
    sprintf(str, "%d", num);
    solve(str);
}

int main(void)
{

    int num1 = 0, num2 = 0, num3 = 0;
    int value = 0;

    scanf("%d %d %d", &num1, &num2, &num3);
    value = num1 * num2 * num3;

    changeStr(value);

    return 0;
}
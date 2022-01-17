#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main(void)
{
    int num1 = 0, num2 = 0;
    int loop = 0;

    scanf("%d", &loop);

    for (int i = 0; i < loop; i++)
    {
        scanf("%d %d", &num1, &num2);
        printf("%d\n", sum(num1, num2));
    }

    return 0;
}
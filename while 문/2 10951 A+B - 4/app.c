#include <stdio.h>

int main(void)
{
    int z;

    int num1 = 0, num2 = 0;

    while (scanf("%d %d", &num1, &num2) == 2)
    {
        printf("%d\n", num1 + num2);
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", (num2 % 10) * num1);
    printf("%d\n", (((num2 % 100) - num2 % 10) * num1) / 10);
    printf("%d\n", (((num2 % 1000) - num2 % 100) * num1) / 100);
    printf("%d\n", num1 * num2);

    return 0;
}
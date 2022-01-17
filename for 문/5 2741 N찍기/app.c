#include <stdio.h>

int main(void)
{
    int num1 = 0;
    scanf("%d", &num1);

    for (int i = 0; i < num1; i++)
    {
        printf("%d\n", i + 1);
    }

    return 0;
}
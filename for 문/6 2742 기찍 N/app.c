#include <stdio.h>

int main(void)
{
    int num1 = 0;
    scanf("%d", &num1);

    for (int i = num1; i > 0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
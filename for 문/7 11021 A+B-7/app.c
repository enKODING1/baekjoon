#include <stdio.h>

int main(void)
{

    int loop = 0;
    int num1 = 0, num2 = 0;
    scanf("%d", &loop);

    for (int i = 0; i < loop; i++)
    {
        scanf("%d %d", &num1, &num2);
        printf("Case #%d: %d\n", i + 1, num1 + num2);
    }

    return 0;
}
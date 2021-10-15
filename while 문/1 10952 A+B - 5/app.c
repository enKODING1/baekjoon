#include <stdio.h>

int main(void)
{
    int num1 = 0, num2 = 0;
    int loop = 100;

    for (int i = 0; i < loop; i++)
    {

        scanf("%d %d", &num1, &num2);
        if (num1 == 0 && num2 == 0)
        {
            break;
        }
        printf("%d\n", num1 + num2);
    }

    return 0;
}
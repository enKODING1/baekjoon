#include <stdio.h>

int main(void)
{
    int num = 0, min = 0;
    int input = 0;
    scanf("%d %d", &num, &min);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &input);
        if (input < min)
        {
            printf("%d ", input);
        }
    }

    return 0;
}
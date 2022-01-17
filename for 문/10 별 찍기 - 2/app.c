#include <stdio.h>

int main(void)
{
    int input, i, j;
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        for (int k = input - i; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
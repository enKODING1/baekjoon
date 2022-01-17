#include <stdio.h>
#define MAX_SIZE 10

int main(void)
{
    int num1 = 0, num2 = 0, num3 = 0;
    int data[MAX_SIZE] = {
        0,
    };

    scanf("%d %d %d", &num1, &num2, &num3);

    num1 *= num2 * num3;

    while (num1)
    {
        data[num1 % 10]++;
        num1 /= 10;
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d\n", data[i]);
    }
}
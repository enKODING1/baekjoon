#include <stdio.h>

int main(void)
{
    int Number = 0;
    int result = 0;

    int front_num = 0;
    int tail_num = 0;
    int A_value = 0;
    int B_value = 0;
    int count = 0;

    scanf("%d", &Number);
    result = Number;

    while (1)
    {
        front_num = Number / 10;
        tail_num = Number % 10;
        A_value = (front_num + tail_num) % 10;
        B_value = (tail_num * 10) + A_value;
        Number = B_value;
        count++;
        if (result == Number)
        {
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}
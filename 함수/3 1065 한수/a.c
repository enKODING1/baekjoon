#include <stdio.h>

int solve(int num);

int main(void)
{
    int input_num = 0;
    scanf("%d", &input_num);

    printf("%d\n", solve(input_num));

    return 0;
}

int solve(int input_num)
{

    int mil = 0, hun = 0, ten = 0, one = 0, count = 0;

    if (input_num < 100)
    {
        return input_num;
    }
    else
    {
        for (int i = 100; i <= input_num; i++)
        {
            mil = i / 1000;
            hun = i % 1000 / 100;
            ten = i % 100 / 10;
            one = i % 10;

            if (i < 1000 && one - ten == ten - hun)
            {
                count++;
            }
            else if (i == 1000 && (one - ten == ten - hun) == hun - mil)
            {
                count++;
            }
        }

        return count + 99;
    }
}
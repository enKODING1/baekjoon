#include <stdio.h>
#define MAX_SIZE 5

void calc(int input_num)
{
    //숫자 분리
    int count = 0;
    int log = 0;
    int data[MAX_SIZE] = {
        0,
    };

    for (int i = 100; i < input_num; i++)
    {
        count = 0;
        while (1)
        {
            data[count] = i % 10;
            i /= 10;
            count++;
            log++;
            if (i % 10 == 0)
            {
                if (count == 4)
                {
                    if ((data[0] - data[1] == data[1] - data[2]) == data[2] - data[3])
                    {
                        log++;
                       
                    }
                }
                else if (count == 3)
                {
                    if (data[0] - data[1] == data[1] - data[2])
                    {
                        log++;
                      
                    }
                }
            }
        }
    }

    printf("%d\n", log + 99);
}

void getSequence(int num)
{
    if (num / 100 <= 0)
    {
        printf("%d\n", num);
    }
    else if (num / 100 > 0)
    {
        calc(num);
    }
}

int main(void)
{
    int input_num = 0;
    scanf("%d", &input_num);
    getSequence(input_num);

    return 0;
}
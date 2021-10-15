#include <stdio.h>
#define MAX_SIZE 20

void solution(char *str)
{
    int i = 0;
    char temp = '0';
    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j < MAX_SIZE; j++)
        {
            if (str[i] != '\0')
            {
                if (str[i] > str[i + j])
                {
                    temp = str[i];
                    str[i] = str[i + j];
                    str[i + j] = temp;
                    i++;
                }
            }
            else
            {
                i++;
                j = 1;
            }
        }
    }

    for (i = 0; i < MAX_SIZE; i++)
    {
        if (str[i] != '\0')
        {
            printf("[%c]", str[i]);
        }
        else
        {
            break;
        }
    }
}

int main(void)
{
    int arr[3] = {150, 266, 427};
    int result = arr[0] * arr[1] * arr[2];
    char s1[MAX_SIZE];
    sprintf(s1, "%d", result);
    solution(s1);
    return 0;
}

//[0][1][2][3][4][5][6][7][8][9]
//[48][49][50][51][52][53][54][55][56][57]
#include <stdio.h>
#include <string.h>

char data[8][5] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

int calcSec(char *dial);
int searchNum(char dialAlpha);

int main(void)
{
    char input[15];
    scanf("%s", input);
    printf("%d", calcSec(input));

    return 0;
}

int searchNum(char dialAlpha)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (dialAlpha == data[i][j])
                return i + 3;
        }
    }

    return 0;
}

int calcSec(char *dial)
{
    int len = strlen(dial);
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        count += searchNum(dial[i]);
    }

    return count;
}
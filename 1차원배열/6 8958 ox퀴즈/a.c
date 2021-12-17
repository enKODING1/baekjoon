#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *data = "hello";
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (data[i] == '\0')
        {
            printf("끝지점");
            break;
        }
        count++;
    }
    printf("\n총 길이 :%d ", count);

    return 0;
}
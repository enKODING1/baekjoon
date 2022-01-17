#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 1000000

typedef struct text
{
    char data[MAX_SIZE];
    int len;
    int count;
} text;

int checkText(text data)
{
    if (data.data[0] != ' ')
        data.count++;

    for (int i = 0; i < data.len; i++)
    {
        if (data.data[i] == ' ' && data.data[i + 1] != ' ' && data.data[i + 1] != '\n')
        {

            data.count++;
        }
    }

    if (data.data[data.len - 1] == ' ')
        data.count--;

    return data.count;
}

int main(void)
{
    text t1;
    t1.len = 0;
    t1.count = 0;

    scanf("%[^\n]", t1.data);
    t1.len = strlen(t1.data);
    printf("%d", checkText(t1));

    return 0;
}
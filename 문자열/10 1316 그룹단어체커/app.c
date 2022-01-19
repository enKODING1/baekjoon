#include <stdio.h>

char data_storage[101];
int top = -1;
int count = 0;
void pushData(char data);

int main(void)
{
    int repeat_data = 0;
    char data[101];

    scanf("%d", &repeat_data);
    for (int i = 0; i < repeat_data; ++i)
    {
        checkData(data, repeat_data);
    }
}

void pushData(char data)
{
    data_storage[++top] = data;
}

char pop()
{
    char pop_data = data_storage[top];
    --top;
    return pop_data;
}

void checkData(char *data, int repeat_data)
{
    for (int i = 0; i < repeat_data; ++i)
    {
        if ()
    }
}
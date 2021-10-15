#include <stdio.h>

void arrInit(char *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}

int main(void)
{
    int max_size = 0;
    scanf("%d", &max_size);

    char text[max_size + 1];

    for (int i = 0; i < max_size; i++)
    {
        scanf("%c", &text[i]);
    }

    return 0;
}
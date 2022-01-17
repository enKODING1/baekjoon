#include <stdio.h>
#define MAX_SIZE 42

int main(void)
{
    int arr[MAX_SIZE] = {
        0,
    };
    int count = 0;

    int input = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &input);
        arr[input % 42]++;
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
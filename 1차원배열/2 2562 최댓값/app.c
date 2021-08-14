#include <stdio.h>
#define MAX_SIZE 9
void solution(int *arr, int size);

int main(void)
{
    int i = 0;
    int arr[MAX_SIZE] = {
        0,
    };
    int arr_size = sizeof(arr) / sizeof(int);

    int data = 0;

    for (i; i < arr_size; i++)
    {
        scanf("%d", &data);
        arr[i] = data;
    }

    solution(arr, arr_size);
    return 0;
}

void solution(int *arr, int size)
{
    int i = 0;
    int max_counter = 0;

    int max = -999999;

    for (i; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_counter = i + 1;
        }
    }

    printf("%d\n%d", max, max_counter);
}
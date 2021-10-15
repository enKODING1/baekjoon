#include <stdio.h>

void sort(int *arr, int arr_len)
{
    int temp = 0;

    for (int i = 0; i < arr_len; i++)
    {
        for (int j = 0; j < (arr_len - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void InputData(int *arr, int arr_len)
{

    int data = 0;

    for (int i = 0; i < arr_len; i++)
    {
        scanf("%d", &data);
        arr[i] = data;
    }
}

void show(int *arr, int arr_len)
{
    for (int i = 0; i < arr_len; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main(void)
{
    int arr_len = 0;
    scanf("%d", &arr_len);

    int arr[arr_len];
    int arr_size = sizeof(arr) / sizeof(int);

    InputData(arr, arr_size);
    sort(arr, arr_size);
    show(arr, arr_size);

    return 0;
}
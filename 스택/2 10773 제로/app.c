#include <stdio.h>

int count = -1;

void push(int *target, int item)
{
    target[++count] = item;
}

void pop(int *target)
{
    count -= 1;
}

void arrInit(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}

int main(void)
{
    int arr_size = 0;
    scanf("%d", &arr_size);

    int array[arr_size];
    int input_num = 0;

    arrInit(array, arr_size);

    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", &input_num);
        if (input_num == 0)
        {
            pop(array);
        }
        else
        {
            push(array, input_num);
        }
    }

    int result = 0;

    for (int i = 0; i <= count; i++)
    {
        result += array[i];
    }
    printf("%d\n", result);
    return 0;
}
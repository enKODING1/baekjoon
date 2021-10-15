#include <stdio.h>

int count = -1;

void push(int *target, int item)
{
    target[++count] = item;
}

void pop(int *target)
{
    int temp = target[count];
    count -= 1;
    return temp;
}

int main(void)
{
    int arr_size = 0;
    scanf("%d", &arr_size);

    printf("%d", count);
    return 0;
}
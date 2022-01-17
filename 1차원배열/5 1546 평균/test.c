#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(sizeof(int) * 2);
    int arr[3] = {1, 2, 3};

    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;

    for (int i = 0; i < 4; i++)
    {
        printf("[%d] => %d \n", i, ptr[i]);
        printf("adress: [%p] \n", &ptr[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("[%d] => %d \n", i, arr[i]);
        printf("adress: [%p] \n", &arr[i]);
    }

    return 0;
}
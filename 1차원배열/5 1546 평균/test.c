#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = (int *)malloc(sizeof(int) * 5);
    printf("%d", sizeof(ptr) / sizeof(int));

    free(ptr);
    return 0;
}
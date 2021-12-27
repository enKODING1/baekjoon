#include <stdio.h>
#include <stdlib.h>

typedef struct number
{
    char *text;
    int size;
    int value;
} number;

int solve(number n1);

int main(void)
{
    number n1;
    n1.size = 0;
    n1.value = 0;
    scanf("%d", &n1.size);

    n1.text = (char *)malloc(sizeof(char) * n1.size);
    scanf("%s", n1.text);
    printf("%d", solve(n1));

    free(n1.text);
    return 0;
}

int solve(number n1)
{
    for (int i = 0; i < n1.size; i++)
    {
        n1.value += (n1.text[i] - '0');
    }

    return n1.value;
}

#include <stdio.h>

void check(int x, int y)
{
    if (x > 0 && y > 0)
    {
        printf("1\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("2\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("3\n");
    }
    else
    {
        printf("4\n");
    }
}

int main(void)
{
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);

    check(x, y);
    return 0;
}
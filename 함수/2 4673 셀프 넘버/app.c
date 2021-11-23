
#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int calc(int n)
{

    if (n < 10)
    {
        return n + n;
    }
    else if (n >= 10 && n < 100)
    {
        return n + (n / 10) + (n % 10);
    }
    else if (n >= 100 && n < 1000)
    {
        int n1 = n / 100;
        int n2 = (n % 100) / 10;
        int n3 = (n % 100) % 10;

        return n + n1 + n2 + n3;
    }
    else if (n >= 1000 && n < 10000)
    {
        int n1 = n / 1000;
        int n2 = (n % 1000) / 100;
        int n3 = (n % 100) / 10;
        int n4 = (n % 100) % 10;

        return n + n1 + n2 + n3 + n4;
    }
    else if (n >= 10000 && n < 100000)
    {
        int n1 = n / 10000;
        int n2 = (n % 10000) / 1000;
        int n3 = (n % 1000) / 100;
        int n4 = (n % 100) / 10;
        int n5 = (n % 100) % 10;

        return n + n1 + n2 + n3 + n4 + n5;
    }
}

int main(void)
{
    int i = 1;
    int data[MAX] = {
        0,
    };
    for (i; i < MAX; i++)
    {
        data[calc(i)]++;
    }

    for (int i = 1; i < MAX; i++)
    {
        if (i > 9993)
        {
            exit(0);
        }
        else if (data[i] == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

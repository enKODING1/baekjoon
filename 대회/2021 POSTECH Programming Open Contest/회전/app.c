#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 15

int solve(long long int num_data, char *num_str);
int add(long long int num, int len);

int main(void)
{
    long long int num = 0;
    int num_length = 0;
    long long int total = 0;
    scanf("%d", &num);
    char buf[BUF_SIZE];
    sprintf(buf, "%d", num);
    num_length = strlen(buf);

    for (int i = 0; i < num_length; ++i)
    {
        num = solve(num, buf);
        total += num;
    }

    printf("%lld\n", total);
    return 0;
}

int solve(long long int num_data, char *num_str)
{
    int num_length = strlen(num_str);
    long long int num1 = add(num_data % 10, num_length);
    long long int num2 = num_data / 10;

    return num1 + num2;
}

int add(long long int num, int len)
{
    for (int i = 0; i < len - 1; ++i)
    {
        num *= 10;
    }
    return num;
}

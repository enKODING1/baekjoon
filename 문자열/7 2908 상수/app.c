#include <stdio.h>

void show(char *data);

int main(void)
{
    char num1[4];
    char num2[4];

    scanf("%s", num1);
    scanf("%s", num2);

    if (num1[2] < num2[2])
    {
        show(num2);
    }
    else if (num1[2] == num2[2] && num1[1] < num2[1])
    {
        show(num2);
    }
    else if (num1[2] == num2[2] && num1[1] == num2[1] && num1[0] < num2[0])
    {
        show(num2);
    }
    else
    {
        show(num1);
    }

    return 0;
}

void show(char *data)
{
    for (int i = 2; i != -1; i--)
    {
        printf("%c", data[i]);
    }
}
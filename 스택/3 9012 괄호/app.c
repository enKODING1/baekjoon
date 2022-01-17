#include <stdio.h>
#define MAX_SIZE 50

int count = -1;

void init()
{
    count = -1;
}

void push(char *target, char item)
{
    count++;
    target[count] = item;
}

int isEmpty()
{
    if (count < 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

char pop(char *target)
{
    if (isEmpty() == 1)
    {
        return 'n';
    }
    else
    {
        char temp = target[count];
        count -= 1;
        return temp;
    }
}

char top(char *target)
{
    if (isEmpty() == 1)
    {
        return 'n';
    }
    else
    {
        return target[count];
    }
}

int strLen(char *str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len = i + 1;
    }

    return len;
}

void pushVPS(char *vps_data)
{
    int flag = 0;
    int len = strLen(vps_data);

    for (int i = 0; i < len; i++)
    {
        if (vps_data[i] == '(')
        {
            push(vps_data, vps_data[i]);
        }
        else if (vps_data[i] == ')')
        {
            if (top(vps_data) == '(')
            {
                pop(vps_data);
            }
            else if (top(vps_data) == 'n')
            {
                flag = 1;
            }
        }
    }

    if (count == -1 && flag == 1)
    {
        printf("NO\n");
    }
    else if (count == -1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    init();
}

int main(void)
{
    char vps[MAX_SIZE];
    int loop = 0;
    scanf("%d", &loop);

    for (int i = 0; i < loop; i++)
    {
        scanf("%s", vps);
        pushVPS(vps);
    }

    return 0;
}

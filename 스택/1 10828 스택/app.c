#include <stdio.h>
#include <string.h>

int count = -1;

void push(int *target, int item)
{
    count = count + 1;
    target[count] = item;
}

void pop(int *target)
{
    if (count < 0)
    {
        printf("-1\n");
    }
    else
    {
        int temp = target[count];
        count = count - 1;
        printf("%d\n", temp);
    }
}

void size()
{
    printf("%d\n", count + 1);
}

int empty()
{
    printf("%d\n", count < 0);
}

int top(int *target)
{
    if (count < 0)
    {
        printf("-1\n");
    }
    else
        printf("%d\n", target[count]);
}

int main(void)
{
    int max_size = 0;
    scanf("%d", &max_size);
    char commend[10];
    int data[max_size];

    for (int i = 0; i < max_size; i++)
    {
        scanf("%s", &commend);
        if (!strcmp(commend, "push"))
        {
            int n;
            scanf("%d", &n);
            push(data, n);
        }
        else if (!strcmp(commend, "top"))
        {
            top(data);
        }
        else if (!strcmp(commend, "size"))
        {
            size();
        }
        else if (!strcmp(commend, "empty"))
        {
            empty();
        }
        else
        {
            pop(data);
        }
    }

    return 0;
}

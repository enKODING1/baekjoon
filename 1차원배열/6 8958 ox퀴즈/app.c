#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 80

int getLength(char *data)
{
    int size = 0;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (data[i] == '\0')
        {
            break;
        }
        size++;
    }

    return size;
}

void showData(char *data)
{
    int loop = getLength(data);
    int count = 0;
    int sub_count[MAX_SIZE] = {
        0,
    };
    int total = 0;

    for (int i = 0; i < loop; i++)
    {
        if (data[i] == 'O')
        {
            sub_count[i] = count + 1;
            total += sub_count[i];
            count++;
        }
        else
        {
            sub_count[i] = 0;
            count = 0;
        }
    }

    printf("%d\n", total);
}

int main(void)
{
    int input_num = 0;
    char *string = (char *)malloc(sizeof(char) * MAX_SIZE);

    scanf("%d", &input_num);

    for (int i = 0; i < input_num; i++)
    {
        scanf("%s", string);
        showData(string);
    }

    free(string);
    return 0;
}
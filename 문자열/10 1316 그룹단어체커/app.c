#include <stdio.h>
#include <string.h>

int data_storage[26] = {
    0,
};
int dataAscii(char *data);
int checkData(char *data);
void initStorage();

int main(void)
{
    int repeat_data = 0;
    int total = 0;
    char data[101];
    scanf("%d", &repeat_data);
    for (int i = 0; i < repeat_data; ++i)
    {

        scanf("%s", data);
        total += dataAscii(data);
    }

    printf("%d\n", total);
    return 0;
}

int dataAscii(char *data)
{
    int len = strlen(data);
    initStorage();
    for (int i = 0; i < len; ++i)
    {
        data_storage[data[i] - 97]++;
    }
    // printf("value: %d\n", checkData(data));
    return checkData(data);
}

int checkData(char *data)
{
    int len = strlen(data);
    int count = 0;

    for (int i = 0; i < 26; ++i)
    {
        if (data_storage[i] > 0)
        {
            for (int j = 0; j < len; ++j)
            {
                if (data[j] - 97 == i)
                {
                    for (int k = 0; k < data_storage[i]; ++k)
                    {
                        if (data[j] - 97 == i)
                        {
                            // printf("data[%d] : %c, data_storage (%d,%c)\n", j, data[j], data_storage[i], i + 97);
                            count++;
                        }
                        j++;
                    }
                    // printf("==============================\n");
                    if (count != data_storage[i])
                    {
                        // printf("!!!!!!!!!return!!!!!!!!\n");
                        // printf("count:%d , data_storage:(%d,%c)\n", count, data_storage[i], i + 97);
                        return 0;
                    }
                    else
                    {
                        count = 0;
                        break;
                    }
                }
            }
        }
    }
    return 1;
}

void initStorage()
{
    for (int i = 0; i < 26; ++i)
    {
        data_storage[i] = 0;
    }
}
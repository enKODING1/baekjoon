#include <stdio.h>
#include <string.h>

int data_storage[26] = {
    0,
};
int dataAscii(char *data);
void showData(char *data);

int main(void)
{
    int repeat_data = 0;
    char data[101];
    scanf("%d", &repeat_data);
    // for (int i = 0; i < repeat_data; ++i)
    // {
    //     scanf("%s", data[i]);
    // }
    scanf("%s", data);
    dataAscii(data);

    return 0;
}

int dataAscii(char *data)
{
    int len = strlen(data);
    for (int i = 0; i < len; ++i)
    {
        data_storage[data[i] - 97]++;
    }
    showData(data);
}

void showData(char *data)
{

    for (int i = 0; i < 26; ++i)
    {
        printf("arr[%c]의 개수: [%d]\n", i + 97, data_storage[i]);
    }
}

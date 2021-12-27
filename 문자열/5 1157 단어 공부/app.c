#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1000000

const char *changeAlpha(char *text);
void solve(char *text);

int main(void)
{
    char *text = (char *)malloc(sizeof(char) * MAX_SIZE);
    scanf("%s", text);
    solve(text);
    free(text);
    return 0;
}

const char *changeAlpha(char *text)
{
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = text[i] + 32;
        }
    }

    return text;
}

void solve(char *text)
{
    int len = strlen(text);
    int count = 0;
    int max[1][2] = {
        0,
    };
    int arr[26] = {
        0,
    };
    const char *str = changeAlpha(text);

    for (int i = 0; i < len; i++)
    {
        arr[str[i] - 'a']++;
    }

    for (int j = 0; j < 26; j++)
    {
        if (arr[j] > max[0][0])
        {
            max[0][0] = arr[j];
            max[0][1] = j;
        }
    }

    for (int k = 0; k < 26; k++)
    {
        if (max[0][0] == arr[k])
        {
            count++;
        }
    }
    if (count > 1)
    {
        printf("?\n");
    }
    else
    {
        printf("%c\n", max[0][1] + 'A');
    }
}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ALPHABET 26

void show(int *alphabet)
{
    for (int i = 0; i < ALPHABET; i++)
    {
        printf("%d ", alphabet[i]);
    }
}

int getPos(char *string, char str)
{

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == str)
        {
            return i;
        }
    }
}

int main(void)
{
    int alphabet[ALPHABET];
    memset(alphabet, -1, sizeof(int) * ALPHABET);
    char *str = (char *)malloc(sizeof(char) * 100);
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (alphabet[str[i] - 'a'] == -1)
        {
            alphabet[str[i] - 'a'] = getPos(str, str[i]);
        }
    }
    show(alphabet);
    free(str);
    return 0;
}
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main(void)
{
    char text[MAX_SIZE];
    scanf("%s", text);

    int count = 0;
    int size = strlen(text);

    for (int i = 0; i < size; ++i)
    {
        if (text[i] == 'c')
        {
            if (text[i + 1] == '=' || text[i + 1] == '-')
            {
                count++;
                i++;
            }
            else
            {
                count++;
            }
        }
        else if (text[i] == 'd')
        {
            if (text[i + 1] == 'z' && text[i + 2] == '=')
            {
                count++;
                i += 2;
            }
            else if (text[i + 1] == '-')
            {
                count++;
                i++;
            }
            else
            {
                count++;
            }
        }
        else if (text[i] == 'l' || text[i] == 'n')
        {
            if (text[i + 1] == 'j')
            {
                count++;
                i++;
            }
            else
            {
                count++;
            }
        }
        else if (text[i] == 's' || text[i] == 'z')
        {
            if (text[i + 1] == '=')
            {
                count++;
                i++;
            }
            else
            {
                count++;
            }
        }
        else
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
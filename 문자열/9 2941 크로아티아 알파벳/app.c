#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

/*
č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z=
*/

int main(void)
{
    char data[MAX_SIZE];
    int len = strlen(data);
    int count = 0;
    scanf("%s", data);
    for (int i = 0; data[i + 1] != '\0'; ++i)
    {
        if (data[i] == 'c')
        {
            if (data[i + 1] == '=' || data[i + 1] == '-')
            {
                i += 2;
                count++;
            }
            else
            {
                count++;
            }
        }
        else if (data[i] == 'd')
        {
            if (data[i + 1] == 'z' && data[i + 2] == '=')
            {
                i += 3;
                count++;
            }
            else if (data[i + 1] == '-')
            {
                i += 2;
                count++;
            }
            else
            {
                count++;
            }
        }
        else if (data[i] == 'l' || data[i] == 'n')
        {
            if (data[i + 1] == 'j')
            {
                i += 2;
                count++;
            }
            else
            {
                count++;
            }
        }
        else if (data[i] == 's' || data[i] == 'z')
        {
            if (data[i + 1] == '=')
            {
                i += 2;
                count++;
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
#include <stdio.h>
#include <string.h>
int find(char *text);

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
    char text[100];

    scanf("%s", text);
    printf("%d", find(text));
    return 0;
}

int find(char *text)
{
    int len = strlen(text);
    int count = 0;

    for (int i = 0; i < len; ++i)
    {

        if (text[i] == 'd')
        {

            if (text[i + 1] == 'z' && text[i + 2] == 0x3D)
            {

                count++;
            }
            else
            {

                count++;
            }
        }
        else if (text[i] == 'c' || text[i] == 'z' || text[i] == 's')
        {
            if (text[i] == 'z' && text[i - 1] == 'd')
            {
            }
            else if (text[i + 1] == 0x3D)
            {

                count++;
            }
        }
        else if (text[i] == 'c' || text[i] == 'd')
        {
            if (text[i + 1] == 0x2D)
            {

                count++;
            }
        }
        else if (text[i] == 'l' || text[i] == 'n')
        {
            if (text[i + 1] == 'j')
            {

                count++;
            }
            else
            {

                count++;
            }
        }
        else if (text[i - 1] == 'z' || text[i - 1] == 'l' || text[i - 1] == 'n' || text[i - 1] == 's' || text[i - 1] == 'c')
        {
        }
        else
        {

            count++;
        }
    }

    return count;
}
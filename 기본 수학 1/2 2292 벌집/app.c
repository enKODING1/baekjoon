/*
 1 : (1) 
 2 : (2~7)   {+5}
 3 : (8~ 19)  {+11}
 4 : (20 ~ 37)  {+17}
 5 : (38 ~ 61) {+ 23}
 6 : (62 ~ 91) {+29}
*/
#include <stdio.h>

int main(void)
{
    int x = 0;
    int range = 1;
    int temp = 1;
    int cnt = 1;

    scanf("%d", &x);

    while (1)
    {
        if (range >= x)
        {
            break;
        }

        temp = 6 * (cnt++);
        range += temp;
    }

    printf("%d\n", cnt);

    return 0;
}
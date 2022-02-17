#include <stdio.h>

int changeTime(int hour, int min);
int calcTime(int time, int endMin);

int main(void)
{
    int hour = 0, min = 0;
    int endMin = 0;

    scanf("%d %d", &hour, &min);
    scanf("%d", &endMin);

    printf("%d", changeTime(hour, min));

    return 0;
}

int changeTime(int hour, int min)
{
    return 60 * hour + min;
}

int calcTime(int time, int endMin)
{
    int
}
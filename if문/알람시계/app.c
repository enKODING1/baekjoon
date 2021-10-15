#include <stdio.h>

int hourChangeMinute(int hour)
{
    return (hour * 60);
}

int calcTime(int hour, int minute)
{
    int minute_time = hourChangeMinute(hour) + minute;
    int result = minute_time - 45;
    return result;
}

int changePlus(int num)
{
    return 60 + num;
}

void solve(int hour, int minute)
{
    int hour_ = calcTime(hour, minute) / 60;
    int minute_ = calcTime(hour, minute) % 60;
    if (minute_ < 0)
    {
        hour_ = 23;
        minute_ = changePlus(minute_);
        printf("%d %d", hour_, minute_);
    }
    else
    {
        printf("%d %d", hour_, minute_);
    }
}

int main(void)
{
    int hour = 0;
    int minute = 0;
    scanf("%d %d", &hour, &minute);
    solve(hour, minute);

    return 0;
}
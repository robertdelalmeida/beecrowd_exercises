#include <stdio.h>

int main()
{
    int hour, minute, newHour, newMinute, zero = 0;
    while((scanf("%d %d", &hour, &minute) != EOF)) {
        newHour = hour / 30;
        newMinute = minute / 6;
        if (newHour > 9)
            printf("%d", newHour);
        else
            printf("%d%d", zero, newHour);
        if (newMinute < 10)
            printf(":%d%d\n", zero, newMinute);
        else
            printf(":%d\n", newMinute);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n, hours, minutes, seconds;
    scanf("%d", &n);
    hours  = n / 3600;
    n = n % 3600;
    minutes = n / 60;
    seconds = n % 60;
    printf("%d:%d:%d\n", hours, minutes, seconds);
}
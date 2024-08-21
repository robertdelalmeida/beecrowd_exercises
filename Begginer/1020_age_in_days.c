#include <stdio.h>

int main()
{
    int year = 0, month = 0, day =0, n, totalMonth;

    scanf("%d", &n);

    year = n / 365;
    n = n % 365;
    month = n / 30;
    n = n % 30;
    day = n;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
}
#include <stdio.h>

int main()
{
    int hours, km;
    double fuel;
    scanf("%d%d", &hours, &km);
    fuel = (hours * km) / 12.0;
    
    printf("%.3lf\n", fuel);
    return 0;
}

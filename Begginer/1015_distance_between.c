#include <stdio.h>
#include <math.h>

int main()
{
    double xOne, xTwo, yOne, yTwo, distance;

    scanf("%lf%lf%lf%lf", &xOne, &yOne, &xTwo, &yTwo);
    
    distance = pow((xTwo - xOne), 2) + pow((yTwo - yOne), 2);

    printf("%.4lf", sqrt(distance));
    
    return 0;
}
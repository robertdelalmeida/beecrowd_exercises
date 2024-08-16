#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, baskaraOne, baskaraTwo;

    scanf("%lf %lf %lf", &a, &b, &c);
    if (a <= 0.0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    delta = (b * b) - 4 * (a) *(c);
    if (delta < 0.0)
    {
        printf("Impossivel calcular\n");
        return 0;
    }
    delta = sqrt(delta);
    a = 2 * a;
    baskaraOne = (-b + delta) / a;
    baskaraTwo = (-b - delta) / a;

    printf("R1 = %.5lf\nR2 = %.5lf\n", baskaraOne, baskaraTwo);
    return 0;
}
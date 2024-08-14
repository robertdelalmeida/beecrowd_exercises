#include <stdio.h>
 
int main() {
    double a, b, c, triangle = 0.0, circle = 0.0, trapezium = 0.0, square = 0.0, rectangle = 0.0, pi = 3.14159; 
    scanf("%lf%lf%lf", &a, &b, &c);
    triangle = a / 2 * c;
    circle = pi * (c * c);
    trapezium = (a + b) / 2 * c;
    square = b * b;
    rectangle = a * b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangle, circle, trapezium, square, rectangle);
    return 0;
}

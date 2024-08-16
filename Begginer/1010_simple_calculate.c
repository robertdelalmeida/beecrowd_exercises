#include <stdio.h>

int main()
{
    double value, valueToPay;
    int num, units;

    scanf("%d%d%lf", &num, &units, &value);
    valueToPay = value * units;

    scanf("%d%d%lf", &num, &units, &value);
    valueToPay += value * units;

    printf("VALOR A PAGAR: R$ %.2lf\n", valueToPay);
    return 0;
}
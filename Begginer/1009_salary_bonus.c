#include <stdio.h>

int main()
{
    double salary, sales, salaryBonus, bonus;
    char seller[20];

    scanf("%s %lf %lf", seller, &salary, &sales);
    bonus = (sales / 10) * 1.5;

    salaryBonus = salary + bonus;

    printf("TOTAL = R$ %.2lf\n", salaryBonus);
    return 0;
}
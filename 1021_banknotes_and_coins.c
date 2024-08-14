#include <stdio.h>
#include <math.h>

int main()
{
    int i, hundred, fifty, twenty, ten, five, two, one, whole_part, decimal_part, fifty_coin, twenty_five_coin, ten_coin, five_coin, one_coin;
    double money;
    scanf("%lf", &money);
    whole_part = (int)money;
    decimal_part = (int)((money - whole_part) * 100);
    
    hundred = whole_part / 100;
    whole_part = whole_part % 100;
    fifty = whole_part / 50;
    whole_part = whole_part % 50;
    twenty = whole_part / 20;
    whole_part = whole_part % 20;
    ten = whole_part / 10;
    whole_part = whole_part % 10;
    five = whole_part / 5;
    whole_part = whole_part % 5;
    two = whole_part / 2;
    one = whole_part % 2;

    fifty_coin = decimal_part / 50;
    decimal_part = decimal_part % 50;
    twenty_five_coin = decimal_part / 25;
    decimal_part = decimal_part % 25;
    ten_coin = decimal_part / 10;
    decimal_part = decimal_part % 10;
    five_coin = decimal_part / 5;
    one_coin = decimal_part % 5;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", hundred, fifty, twenty, ten, five, two, one, fifty_coin, twenty_five_coin, ten_coin, five_coin, one_coin);

    return 0;
}
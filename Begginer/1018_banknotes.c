#include <stdio.h>

int main()
{
    int money, newMoney, i, hundred, fifty, twenty, ten, five, two, one;
    
    scanf("%d", &money);
    newMoney = money;

    hundred = money / 100;
    newMoney = money % 100;
    fifty = newMoney / 50;
    newMoney = newMoney % 50;
    twenty = newMoney / 20;
    newMoney = newMoney % 20;
    ten = newMoney / 10;
    newMoney = newMoney % 10;
    five = newMoney / 5;
    newMoney = newMoney % 5;
    two = newMoney / 2;
    one = newMoney % 2;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", money, hundred, fifty, twenty, ten, five, two, one);

    return 0;
}
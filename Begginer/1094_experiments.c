#include <stdio.h>
#include <math.h>

int main()
{
    int n, t = 0, nOfC, rabbits = 0, rats = 0, frogs = 0;
    char c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &nOfC, &c);
        if (c == 'C')
            rabbits += nOfC;
        else if (c == 'R')
            rats += nOfC;
        else frogs += nOfC;
    }
    t = rabbits + rats + frogs;
    t = (double)t;
    printf("Total: %d cobaias\n", t);
    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", rabbits, rats, frogs);
    printf("Percentual de coelhos: %.2lf %%\n", (double)rabbits / t * 100.0);
    printf("Percentual de ratos: %.2lf %%\n", (double)rats / t * 100.0);
    printf("Percentual de sapos: %.2lf %%\n", (double)frogs / t * 100.0);
    return 0;
}
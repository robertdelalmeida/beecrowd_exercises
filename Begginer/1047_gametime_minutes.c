#include <stdio.h>

int main()
{
    int ha, hb, ma, mb, hours, min, totalMin;
    
    scanf("%d%d%d%d", &ha, &ma, &hb, &mb);
    ma += ha * 60;
    mb += hb * 60;

    if (ma == mb)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if (mb > ma) {
        totalMin = mb - ma;
        hours = totalMin / 60;
        min = totalMin % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, min);
    }
    else {
        totalMin = mb + (1440 - ma);
        hours = totalMin / 60;
        min = totalMin % 60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, min);
    }
    return 0;
}

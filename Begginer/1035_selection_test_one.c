#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a % 2 == 0) {
        if (c >= 0 && d >= 0) {
            if (b > c && d > a) {
                if (c + d > a + b)
                    printf("Valores aceitos\n");
                else
                    printf("Valores nao aceitos\n");
            }
            else
                printf("Valores nao aceitos\n");
        }
        else
            printf("Valores nao aceitos\n");
    }
    else
        printf("Valores nao aceitos\n");
}
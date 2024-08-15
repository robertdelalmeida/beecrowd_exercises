#include <stdio.h>

int main()
{
    int x, i, j;
    while (scanf("%d", &x) == 1) {
        if (x == 0) break ;
        for (i = 0; i < x; i++) {
            printf("%d", i + 1);
            if (i == x - 1) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
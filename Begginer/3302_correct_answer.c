#include <stdio.h>

int main()
{
    int n, answer, i;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &answer);
        printf("resposta %d: %d\n", i, answer);
    }
}
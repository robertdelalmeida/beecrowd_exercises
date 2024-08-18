#include <stdio.h>

int main()
{
    int n, nb, j;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nb);
        if (nb == 0 || nb == 1)
            printf("Not Prime\n");
        else if (nb == 2)
            printf("Prime\n");
        else {
            j = 2;
            while (j < nb && nb % j != 0 && j < 13) {
                j++;
            }
            if (j == 13 || j == nb)
                printf("Prime\n");
            else
                printf("Not Prime\n");
        }
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int n, nb, j, flag;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nb);
        flag = 1;

        if (nb <= 1) {
            printf("Not Prime\n");
            continue;
        }
        if (nb == 2) {
            printf("Prime\n");
            continue;
        }
        if (nb % 2 == 0) {
            printf("Not Prime\n");
            continue;
        }

        j = 2;
        while (j <= sqrt(nb)) {
            if (nb % j == 0) {
                flag = 0;
                break ;
            }
            j++;
        }
        if (flag)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    return 0;
}
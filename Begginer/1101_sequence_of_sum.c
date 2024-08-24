#include <stdio.h>

int main()
{
    int x, y, i;

    while (scanf("%d %d", &x, &y)) {
        int min, max, sum = 0;
        if (x <= 0 || y <= 0)
            break ;
        else if (x == y)
            printf("%d Sum=%d\n", x, x);
        else {
            if (x < y) {
                min = x;
                max = y;
            }
            else {
                min = y;
                max = x;
            }
            for (i = min; i <= max; i++) {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
    }
}
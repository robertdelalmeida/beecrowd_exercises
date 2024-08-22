#include <stdio.h>

int main()
{
    int bOfT, bOfD, price, totalBottles = 0, sum = 0;

    scanf("%d %d %d", &bOfT, &bOfD, &price);

    totalBottles = bOfT + bOfD;
    if (price > totalBottles) {
        printf("0\n");
        return 0;
    }

    while (totalBottles >= price) {
        sum += totalBottles / price;
        totalBottles = (totalBottles / price) + (totalBottles % price);
    }

    printf("%d\n", sum);

    return 0;
}

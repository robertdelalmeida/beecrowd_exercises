#include <stdio.h>

int main()
{
    int x, y, aux, i = 0, array[1000];
    scanf("%d %d", &x, &y);
    if (y > x) {
        aux = x;
        x = y;
        y = aux;
    }
    y = y + 1;
    while (y < x) {
        if (y % 5 == 2 || y % 5 == 3) {
            array[i] = y;
            i++;
        }
        y++;
    }
    for (int j = 0; j < i; j++)
        printf("%d\n", array[j]);
    return 0;
}
#include <stdio.h>

int main()
{
    int x, i = 1;
    scanf("%d", &x);
    while (i < 11) {
        printf("%d x %d = %d\n", i, x, i * x);
        i++;
    }
}
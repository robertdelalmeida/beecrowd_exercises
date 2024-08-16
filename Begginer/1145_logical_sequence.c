#include <stdio.h>

int main()
{
    int x, y, i, j;
    scanf("%d %d", &x, &y);
    for (i = 1; i < y; i = i + x)
    {
        for (j = 0; j < x; j++)
        {
            printf("%d", i + j);
            if (j == (x - 1)) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b, i, j;
    double pa, pb;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %lf %lf", &a, &b, &pa, &pb);
        j = 0;

        while (a <= b && j < 101)
        {
            a += (int)(a * pa / 100.0);
            b += (int)(b * pb / 100.0);
            j++;
        }

        if (j < 101)
            printf("%d anos.\n", j);
        else
            printf("Mais de 1 seculo.\n");
    }
    return 0;
}
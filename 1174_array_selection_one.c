#include <stdio.h>

int main()
{
    int i;
    double n, array[100];

    for (i = 0; i < 100; i++)
    {
        scanf("%lf", &n);
        array[i] = n;
    }
    for (int j = 0; j < 100; j++)
    {
        array[j];
        if (array[j] <= 10)
            printf("A[%d] = %.1lf\n", j, array[j]);
    }
    return 0;
}
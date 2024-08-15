#include <stdio.h>

int main()
{
    int array[20], n, i;
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &n);
        array[i] = n;
    }
    i = i - 1;
    for (int j = 0; i >= 0; i--)
    {
        printf("N[%d] = %d\n", j, array[i]);
        j++;
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int n, num, i, min, pos;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        array[i] = num;
    }
    min = array[0];
    pos = 0;
    for (int j = 1; j < n; j++)
    {
        if (array[j] < min)
        {
            min = array[j];
            pos = j;
        }    
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, pos);
    return 0;
}
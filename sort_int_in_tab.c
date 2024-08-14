#include <stdio.h>

int main()
{
    int i, j, aux, a, b, c;
    scanf("%d%d%d", &a, &b, &c);   
    int array[3]= {a, b, c};
    j = 0;
    while (j < 3)
    {
        i = 0;
        while (i < 3 - 1 - j)
        {
            if (array[i] > array[i + 1])
            {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
            }
            i++;
        }
        j++;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", array[0], array[1], array[2], a, b, c);
    return 0;
}
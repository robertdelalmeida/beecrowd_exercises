#include <stdio.h>

int main()
{
    int a, n, i, totalSquare;
    scanf("%d", &n);

    totalSquare = n * n;    
    a = totalSquare / 2;

    if (n % 2 != 0)
        printf("%d casas brancas e %d casas pretas\n", a + 1, a);
    else 
        printf("%d casas brancas e %d casas pretas\n", a, a);
    return 0;
}
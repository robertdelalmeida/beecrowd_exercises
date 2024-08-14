#include <stdio.h>

int main()
{
    int n, i[500], num, mark;
    scanf("%d", &n);
    i[0] = 0;
    mark = 0;
    for (int j = 1; j < n + 1; j++)
    {
        scanf("%d", &num);
        i[j] = num;
        if (i[j] != i[j - 1])
        mark++;    
    }
    printf("%d\n", mark);
    return 0;
}
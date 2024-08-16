#include <stdio.h>

int main()
{
    int i, j, nOfTests, a, b;

    scanf("%d", &nOfTests);

    if (nOfTests < 1 && nOfTests > 3000)
        return 0;

    int stacks[nOfTests];

    for (i = 0; i < nOfTests; i++)
    {
        scanf("%d%d", &a, &b);
        if (a < 1 || b < 1)
            return 0;
        else {
            while (b != 0)
            {
                j = b;
                b = a % b;
                a = j;
            }
            stacks[i] = a;
        }
    }

    for (i = 0; i < nOfTests; i++)
        printf("%d\n", stacks[i]);
    
    return 0;
}
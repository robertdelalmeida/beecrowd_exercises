#include <stdio.h>
 
int main()
{
    long long a, b, i, j;
    while (scanf("%lld%lld", &a, &b) != EOF)
    {
        if (a < 0)
            a = 0;
        else if (a <= 1)
            a = 1;
        else {
            i = a;
            while (i > 1) {
                a = a * (i - 1);
                i--;
            }
        }

        if (b < 0)
            b = 0;
        else if (b <= 1)
            b = 1;
        else {
            j = b;
            while (j > 1) {
                b = b * (j - 1);
                j--;
            }
        }
        printf("%lld\n", a + b);    
    }
    return 0;
}
#include <stdio.h>

int main()
{
    long long x, y;
    while (scanf("%lld %lld", &x, &y) != EOF) {
        if (x > y)
            printf("%lld\n", x - y);
        else 
            printf("%lld\n", y - x);
    }
    return 0;
}
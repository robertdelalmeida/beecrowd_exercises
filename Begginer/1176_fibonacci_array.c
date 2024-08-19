#include <stdio.h>

long long fibonacci(long long n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    long long i, a = 0, b = 1, temp;
    for (i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main()
{
    int n, i, x;
    long long nOfFib;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        nOfFib = fibonacci(x);
        printf("Fib(%d) = %lld\n", x, nOfFib);
    }
    return 0;
}
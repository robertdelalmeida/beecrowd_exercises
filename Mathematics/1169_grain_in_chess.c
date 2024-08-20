#include <stdio.h>

int main() {
    int i, j, n, nq;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        unsigned long long temp = 1ULL, num = 0ULL, gram = 0ULL;
        scanf("%d", &nq);
        for (j = 0; j < nq; j++) {
            num = temp * 2;
            if (j > 60)
                temp = num - 1;
            else
                temp = num;
        }
        gram = num / 12;
        printf("%llu kg\n", gram / 1000);
    }
}
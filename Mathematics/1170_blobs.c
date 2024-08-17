#include <stdio.h>

int main()
{
    int i, n, days;
    double kg;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lf", &kg);
        days = 0;
        while(kg > 1.0) {
            kg /= 2.0;
            days++;
        }
        printf("%d dias\n", days);
    }
    return 0;
}
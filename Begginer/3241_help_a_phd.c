#include <stdio.h>

int main()
{
    int n, i, a, b;
    char str[10];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", str);
        if (str[0] == 'P') {
            printf("skipped\n");
        }
        else {
            sscanf(str, "%d+%d", &a, &b);
            printf("%d\n", a + b);
        }
    }
}
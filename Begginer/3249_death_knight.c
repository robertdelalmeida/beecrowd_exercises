#include <stdio.h>

int main()
{
    int n, i, j, win = 0;
    char abilities[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", abilities);
        int sum = 1;
        j = 0;
        while (abilities[j] != '\0') {
            if (abilities[j] == 'C') {
                if (abilities[j + 1] == 'D') {
                    sum = 0; 
                    break ;
                }
            }
            j++;
        }
        if (sum)
            win++;
    }
    printf("%d\n", win);

    return 0;
}
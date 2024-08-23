#include <stdio.h>

int main()
{
    int n, size, i, j, k, l = 0, aux;
    char word[1001];
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        getchar();
        scanf("%[^\n]", word);

        j = 0;
        while (word[j] != '\0') {
            if ((word[j] > 64 && word[j] < 91) || (word[j] > 96 && word[j] < 123))
                word[j] = word[j] + 3;
            j++;
        }
        size = j;
        for (k = 0; k < size / 2; k++) {
            aux = word[k];
            word[k] = word[size - 1 - k];
            word[size - 1 - k] = aux;
        }
        if (j > 1) {
            for (k = j / 2; k < j; k++) {
                word[k] = word[k] - 1;
            }
        }
        
        printf("%s\n", word);
    }
}
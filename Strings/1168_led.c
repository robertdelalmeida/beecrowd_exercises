#include <stdio.h>

int main()
{
    int n, i, j;
    char number[10000];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%s", number);
        
        int sum = 0;

        j = 0;
        while (number[j] != '\0') {
            if (number[j] == '1') sum += 2;
            else if (number[j] == '2' || number[j] == '3' || number[j] == '5') sum += 5;
            else if (number[j] == '4') sum += 4;
            else if (number[j] == '6' || number[j] == '9' || number[j] == '0') sum += 6;
            else if (number[j] == '7') sum += 3;
            else if (number[j] == '8') sum += 7;
            j++;
        }

        printf("%d leds\n", sum);
    }
}
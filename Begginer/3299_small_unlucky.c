#include <stdio.h>

int main()
{
    int i = 0, j, flag = 1;
    char number[30];
    scanf("%s", number);

    while (number[i] != '\0')
        i++;
    
    for (j = 0; j < i; j++) {
        if (number[j] == '1' && number[j + 1] == '3') {
            printf("%s es de Mala Suerte\n", number);
            flag = 0;
            break ;
        }
    }
    if (flag)
        printf("%s NO es de Mala Suerte\n", number);
    
    return 0;
}
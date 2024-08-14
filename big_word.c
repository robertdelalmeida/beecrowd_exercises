#include <stdio.h>
 
int main() {
    char word[21];
    int i = 0;
    
    scanf("%s", word);
    while (word[i] != '\0')
        i++;
    if (i >= 9)
        printf("palavrao\n");
    else
        printf("palavrinha\n");
    return 0;
}
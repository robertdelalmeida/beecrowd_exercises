#include <stdio.h>

int main()
{
    int i;
    char string[501];

    scanf("%[^\n]", string);
    
    i = 0;
    while (string[i] != '\0')
        i++;
    if (i > 80)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}

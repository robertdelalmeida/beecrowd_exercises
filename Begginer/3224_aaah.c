#include <stdio.h>

int main()
{
    char jon[1001];
    char doctor[1001];

    scanf("%s", jon);
    scanf("%s", doctor);
    int i = 0, j = 0;
    while (jon[i] != '\0')
        i++;
    while (doctor[j] != '\0')
        j++;
    if (i >= j)
        printf("go\n");
    else
        printf("no\n");

    return 0;
}
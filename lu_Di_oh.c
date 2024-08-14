#include <stdio.h>

int main()
{
    int n, nCardsM, nCardsL, chooseM, chooseL, chooseA;
    int attributeM[10000], attributeL[10000], attribute, marcos, leonardo;
    
    while (scanf("%d", &n) != EOF)
    {
        scanf("%d %d", &nCardsM, &nCardsL);
        int nAttM = n * nCardsM, nAttL = n * nCardsL;
        for (int m = 0; m < nAttM; m++) {
            scanf("%d", &attribute);
            attributeM[m] = 0;
            if (attribute > attributeM[m])
                attributeM[m] = attribute;
        }
        for (int l = 0; l < nAttL; l++) {
            scanf("%d", &attribute);
            attributeL[l] = 0;
            if (attribute > attributeL[l])
                attributeL[l] = attribute;
        }
        scanf("%d%d%d", &chooseM, &chooseL, &chooseA);
        chooseA = chooseA - 1;
        if (chooseM == 1 && chooseA > 0) marcos = attributeM[chooseA];
        else marcos = attributeM[chooseA + (n * (chooseM - 1))];
        if (chooseL == 1 && chooseA > 0) leonardo = attributeL[chooseA];
        else leonardo = attributeL[chooseA + (n * (chooseL - 1))];
        if (marcos > leonardo) printf("Marcos\n");
        else if (leonardo > marcos) printf("Leonardo\n");
        else printf("Empate\n");
    }
    return 0;
}

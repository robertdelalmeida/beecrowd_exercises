#include <stdio.h>
 
int main()
{
    double prices[5]= {4.00, 4.50, 5.00, 2.00, 1.50};
    int item, quantity, i;

    scanf("%d%d", &item, &quantity);

    i = item - 1;
    prices[i] *= quantity;

    printf("Total: R$ %.2lf\n", prices[i]);
    
    return 0;
}
 
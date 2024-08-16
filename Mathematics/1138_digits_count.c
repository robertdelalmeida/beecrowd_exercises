#include <stdio.h>

int	ft_getnbr(int nb)
{
    int n = 0;
    if (nb >= 10 && nb != n)
	{
        return (ft_getnbr(nb / 10));
        nb = n;
	}
    if (nb >= 10 && nb == n)
        return (ft_getnbr(nb % 10));
    return (nb);
}

int main()
{
    int x, y, divider, nb, i = 0;

    while ((scanf("%d %d", &x, &y)) != 0) {
        int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
        if (y == 0)
            return 0;
        while (x <= y) {
            if (x >= 1000) {
                while (i < 3) {
                    nb = ft_getnbr(x);
                    if (nb == 0) zero++;
                    else if (nb == 1) one++;
                    else if (nb == 2) two++;
                    else if (nb == 3) three++;
                    else if (nb == 4) four++;
                    else if (nb == 5) five++;
                    else if (nb == 6) six++;
                    else if (nb == 7) seven++;
                    else if (nb == 8) eight++;
                    else if (nb == 9) nine++;
                }
            }
            else if (x >= 100) {
                i = 0;
                while (i < 2) {
                    nb = ft_getnbr(x); 
                    if (nb == 0) zero++;
                    else if (nb == 1) one++;
                    else if (nb == 2) two++;
                    else if (nb == 3) three++;
                    else if (nb == 4) four++;
                    else if (nb == 5) five++;
                    else if (nb == 6) six++;
                    else if (nb == 7) seven++;
                    else if (nb == 8) eight++;
                    else if (nb == 9) nine++;
                }
            }
            else if (x >= 10) {
                i = 0;
                while(i < 1) {
                    nb = ft_getnbr(x);
                    if (nb == 0) zero++;
                    else if (nb == 1) one++;
                    else if (nb == 2) two++;
                    else if (nb == 3) three++;
                    else if (nb == 4) four++;
                    else if (nb == 5) five++;
                    else if (nb == 6) six++;
                    else if (nb == 7) seven++;
                    else if (nb == 8) eight++;
                    else if (nb == 9) nine++;
                }
            }
            else
                nb = ft_getnbr(x);
            printf("%d\n", nb);
            if (nb == 0) zero++;
            else if (nb == 1) one++;
            else if (nb == 2) two++;
            else if (nb == 3) three++;
            else if (nb == 4) four++;
            else if (nb == 5) five++;
            else if (nb == 6) six++;
            else if (nb == 7) seven++;
            else if (nb == 8) eight++;
            else if (nb == 9) nine++;
            x++;
        }
        printf("zero: %d one: %d two: %d three: %d four: %d five: %d six: %d seven: %d eight: %d nine: %d\n", zero, one, two, three, four, five, six, seven, eight, nine);
    }
    return 0;
}
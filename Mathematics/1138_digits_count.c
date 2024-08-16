#include <stdio.h>

void	ft_getnbr (int nb, int *zero, int *one, int *two, int *three, int *four, int *five, int *six, int *seven, int *eight, int *nine)
{
    while (nb > 0) {
        int digit = nb % 10;

        if (digit == 0) *zero += 1;
        else if (digit == 1) *one += 1;
        else if (digit == 2) *two += 1;
        else if (digit == 3) *three += 1;
        else if (digit == 4) *four += 1;
        else if (digit == 5) *five += 1;
        else if (digit == 6) *six += 1;
        else if (digit == 7) *seven += 1;
        else if (digit == 8) *eight += 1;
        else if (digit == 9) *nine += 1;

        nb /= 10;
    }
}

int main()
{
    int x, y;

    while ((scanf("%d %d", &x, &y)) != 0) {
        if (y == 0)
            return 1;

        int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;

        for (int i = x; i <= y; i++){
            if (i == 0)
                zero++;
            else ft_getnbr(i, &zero, &one, &two, &three, &four, &five, &six, &seven, &eight, &nine);
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", zero, one, two, three, four, five, six, seven, eight, nine);
    }
    return 0;
}
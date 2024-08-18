#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double how_much_average(int nb, double *array) {
    double totalGrade = 0.0;
    double grade;

    for (int j = 0; j < nb; j++) {
            scanf("%lf", &grade);
            array[j] = grade;
            totalGrade += (double)grade;
        }
        return (totalGrade / ((double)nb));
}

int main()
{
    int n, nb;
    double percentage = 0.0, average = 0.0, above;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nb);
        
        double *array = (double *)malloc(nb * sizeof(double));
        average = how_much_average(nb, array);

        above = 0.0;
        for (int k = 0; k < nb; k++) {
            if (array[k] > average)
                above++;
        }
        percentage = ((double)(above / nb)) * 100.0;
        printf("%.3lf%%\n", percentage);
    }
}
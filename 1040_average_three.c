#include <stdio.h>

int main()
{
    double a, b, c, d, e, exam, average;
    
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    average = (a / 10 * 2) + (b / 10 * 3) + (c / 10 * 4) + (d / 10 * 1);
    
    if (average >= 7.0)
        printf("Media: %.1lf\nAluno aprovado.\n", average);

    else if (average >= 5.0 && average < 7.0)
    {
        printf("Media: %.1lf\nAluno em exame.\n", average);
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        exam = (average + e) / 2.0;
        if (exam >= 5.0)
            printf("Aluno aprovado.\nMedia final: %.1lf\n", exam);
        else printf("Aluno reprovado.\nMedia final: %.1lf\n", exam);
    }
    else printf("Media: %.1lf\nAluno reprovado.\n", average);

    return 0;
}
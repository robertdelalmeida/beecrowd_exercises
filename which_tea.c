#include <stdio.h>

int main()
{
    int tea, guesses[5], guess;
    guess = 0;
    scanf("%d", &tea);
    scanf("%d%d%d%d%d", &guesses[0], &guesses[1], &guesses[2], &guesses[3], &guesses[4]);
    for(int i = 0;  i < 5; i++)
    {
        if (tea == guesses[i])
            guess++;
    }
    printf("%d\n", guess);
}

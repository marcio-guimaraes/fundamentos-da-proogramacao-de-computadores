#include <stdio.h>

int main()
{

    int vetor1[5], vetor2[5], n = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("Numero vetor 1: ");
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Numero vetor 2: ");
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        vetor1[i] = vetor1[i] - vetor2[n];
        n--;
        printf("%d\n", vetor1[i]);
    }

    return 0;
}
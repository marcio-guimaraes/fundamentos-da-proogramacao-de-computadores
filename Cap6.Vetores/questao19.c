#include <stdio.h>

int main()
{

    int vetor1[10], vetor2[10], vetor_resultante[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Numero %d do primeiro vetor: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Numero %d do segundo vetor: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        vetor_resultante[i] = vetor1[i] * vetor2[i];
        printf("Valor resultante na posicao %d = %d\n", i, vetor_resultante[i]);
    }

    return 0;
}
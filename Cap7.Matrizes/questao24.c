#include <stdio.h>

#define linha 4
#define coluna 5

int main()
{

    int matriz[linha][coluna] = {0}, soma[coluna] = {0};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
            soma[j] += matriz[i][j];
        }
    }

    for (int i = 0; i < coluna; i++)
    {
        if (soma[i] > 10)
        {
            printf("Soma da coluna do indice(%d): %d\n", i, soma[i]);
        }
        else
        {
            printf("A soma da coluna do indice %d eh menor ou igual a 10\n", i);
        }
    }

    return 0;
}
#include <stdio.h>

#define linha 3
#define coluna 8

int main()
{

    int matriz1[linha][coluna], matriz2[linha][coluna], soma[linha][coluna], diferenca[linha][coluna];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz2[i][j]);
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
            diferenca[i][j] = matriz1[i][j] - matriz2[i][j];
            if (diferenca[i][j] < 0)
            {
                diferenca[i][j] *= -1;
            }
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Soma da posicao [%d][%d]: %d\n", i, j, soma[i][j]);
            printf("Diferenca da posicao [%d][%d]: %d\n", i, j, diferenca[i][j]);
        }
    }

    return 0;
}
#include <stdio.h>

#define linha 20
#define coluna 10

int main()
{

    int matriz[linha][coluna], soma_colunas[coluna] = {0};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
            soma_colunas[j] += matriz[i][j];
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            matriz[i][j] *= soma_colunas[j];
            printf("%d\n", matriz[i][j]);
        }
    }

    return 0;
}
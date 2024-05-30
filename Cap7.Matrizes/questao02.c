#include <stdio.h>

#define linha 2
#define coluna 4

int main()
{

    int matriz[linha][coluna];
    int soma = 0, pares = 0;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
            if ((matriz[i][j] & 1) == 0)
            {
                soma += matriz[i][j];
                pares++;
            }
        }
    }

    for (int i = 0; i < linha; i++)
    {
        int entre12e20 = 0;
        for (int j = 0; j < coluna; j++)
        {
            if (12 <= matriz[i][j] && matriz[i][j] <= 20)
            {
                entre12e20++;
            }
        }
        printf("Linha %d - %d\n", i, entre12e20);
    }

    printf("Media dos pares: %.2lf\n", (double)soma/pares);

    return 0;
}
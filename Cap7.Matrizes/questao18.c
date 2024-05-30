#include <stdio.h>

#define dimensao 5

int main()
{

    double matriz[dimensao][dimensao], soma = 0, quantidade = 0;

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            if (i + j == 4)
            {
                soma += matriz[i][j];
                quantidade++;
            }
        }
    }

    double media = soma / quantidade;
    printf("Media = %.2lf\n", media);

    return 0;
}
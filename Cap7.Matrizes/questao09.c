#include <stdio.h>

#define linha 3
#define coluna 3

int main()
{

    double matriz[linha][coluna];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%lf", &matriz[i][j]);
            matriz[i][j] *= (i + j);
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%.2lf\n", matriz[i][j]);
        }
    }

    return 0;
}
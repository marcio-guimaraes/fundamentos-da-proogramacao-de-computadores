#include <stdio.h>

#define dimensao 5

int main()
{

    double matriz[dimensao][dimensao], diagonal[dimensao];

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            scanf("%lf", &matriz[i][j]);
            if (i == j)
            {
                diagonal[i] = matriz[i][j];
            }
        }
    }

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            matriz[i][j] *= diagonal[i];
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
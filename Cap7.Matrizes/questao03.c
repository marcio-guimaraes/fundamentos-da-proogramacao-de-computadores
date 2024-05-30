#include <stdio.h>

#define linha 6
#define coluna 3

int main()
{

    int matriz[linha][coluna], i_maior[2] = {0}, i_menor[2] = {0};
    int maior, menor;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    for (int i = 1; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (maior < matriz[i][j])
            {
                maior = matriz[i][j];
                i_maior[0] = i;
                i_maior[1] = j;
            }
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                i_menor[0] = i;
                i_menor[1] = j;
            }
        }
    }

    printf("Maior: %d - [%d][%d]\nMenor: %d - [%d][%d]", maior, i_maior[0], i_maior[1], menor, i_menor[0], i_menor[1]);

    return 0;
}
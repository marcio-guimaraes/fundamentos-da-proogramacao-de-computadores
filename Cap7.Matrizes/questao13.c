#include <stdio.h>

#define linha 6
#define coluna 4

int main()
{

    int matriz[linha][coluna], maior[linha];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
            if (j == 0)
            {
                maior[i] = matriz[i][j];
            }
            else if (maior[i] < matriz[i][j])
            {
                maior[i] = matriz[i][j];
            }
        }
    }
    
    printf("\n");
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            matriz[i][j] *= maior[i];
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
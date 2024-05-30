#include <stdio.h>

#define linha 3
#define coluna 5

int main()
{

    int matriz[linha][coluna];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nEntre 15 e 20:\n");
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (15 <= matriz[i][j] && matriz[i][j] <= 20)
            {
                printf("%d\n", matriz[i][j]);
            }
        }
    }

    return 0;
}
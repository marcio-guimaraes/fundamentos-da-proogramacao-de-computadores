#include <stdio.h>
#include <string.h>

#define linha 12
#define coluna 4

int main()
{

    int vendas[linha][coluna], mes[12] = {0}, ano = 0;
    const char *nomes[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &vendas[i][j]);
            mes[i] += vendas[i][j];
        }
        ano += mes[i];
    }

    for (int i = 0; i < linha; i++)
    {
        printf("%s- Vendas :%d\n", nomes[i], mes[i]);
        for (int j = 0; j < coluna; j++)
        {
            printf("Semana %d - %d vendas\n", j + 1, vendas[i][j]);
        }
    }
    printf("Total vendido no ano: %d\n", ano);

    return 0;
}
#include <stdio.h>

int main()
{

    char nome_clientes[8][30];
    int dvd[8];

    for (int i = 0; i < 8; i++)
    {
        printf("Nome: ");
        scanf("%s", nome_clientes[i]);
        printf("Quantidade de dvd's locados: ");
        scanf("%d", &dvd[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%s - Locacoes gratis = %d\n", nome_clientes[i], dvd[i] / 10);
    }

    return 0;
}
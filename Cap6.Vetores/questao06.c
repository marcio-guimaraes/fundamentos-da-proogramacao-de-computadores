#include <stdio.h>

int main()
{

    int count = 10, i_maior = 0, i_menor = 0;
    float vendas[count], percentual[count], total_vendas = 0, receber[count];
    char nome_vendedor[count][30];

    // RECEBENDO OS DADOS
    for (int i = 0; i < count; i++)
    {
        printf("Total de vendas: ");
        scanf("%f", &vendas[i]);
        printf("Percentual: ");
        scanf("%f", &percentual[i]);
        receber[i] = vendas[i] * percentual[i];
        printf("Nome do vendedor: ");
        scanf("%s", nome_vendedor[i]);
        total_vendas += vendas[i];
    }

    // PRINTANDO RELATÓRIO
    for (int i = 0; i < count; i++)
    {
        printf("Valor que %s vai receber = %.2f\n", nome_vendedor[i], receber[i]);
    }
    printf("\nTotal de vendas = %.2f\n", total_vendas);

    // COMPARANDO OS VALORES QUE SERÃO RECEBIDOS
    float maior = receber[0];
    float menor = receber[0];
    for (int i = 0; i < count; i++)
    {
        if (receber[i] > maior)
        {
            maior = receber[i];
            i_maior = i;
        }
        if (receber[i] < menor)
        {
            menor = receber[i];
            i_menor = i;
        }
    }

    printf("\n%s vai resceber o maior valor = %.2f\n", nome_vendedor[i_maior], receber[i_maior]);
    printf("%s vai resceber o menor valor = %.2f\n", nome_vendedor[i_menor], receber[i_menor]);

    return 0;
}
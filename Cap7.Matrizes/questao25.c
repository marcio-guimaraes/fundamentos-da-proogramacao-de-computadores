#include <stdio.h>

#define produtos 5
#define armazem 10

int main()
{

    double preco[produtos];
    int quantidade[produtos][armazem], maiorEstoque, menorEstoque, i_maior, i_menor[2];

    // RECEBENDO PRECOS
    for (int i = 0; i < produtos; i++)
    {
        scanf("%lf", &preco[i]);
    }

    // RECEBENDO OS ESTOQUES
    for (int i = 0; i < produtos; i++)
    {
        for (int j = 0; j < armazem; j++)
        {
            scanf("%d", &quantidade[i][j]);
            // VERIFICANDO QUAIS O MAIOR E MENOR ESTOQUE
            if (i == 0 && j == 0)
            {
                maiorEstoque = quantidade[i][j];
                i_maior = 0;
                menorEstoque = quantidade[i][j];
                i_menor[0] = 0;
                i_menor[1] = 0;
            }
            else
            {
                if (maiorEstoque < quantidade[i][j])
                {
                    maiorEstoque = quantidade[i][j];
                    i_maior = i;
                }
                if (quantidade[i][j] < menorEstoque)
                {
                    menorEstoque = quantidade[i][j];
                    i_menor[0] = i;
                    i_menor[1] = j;
                }
            }
        }
    }

    // IMPRIMINDO A QUANTIDADE EM CADA ARMAZEM E O TOTAL
    for (int i = 0; i < produtos; i++)
    {
        int estocados = 0;
        printf("\nQuantidade do produto %d em cada armazem\n", i + 1);
        for (int j = 0; j < armazem; j++)
        {
            printf("%d ", quantidade[i][j]);
            estocados += quantidade[i][j];
        }
        printf("\nEstoque total = %d\n", estocados);
    }

    //MAIOR E MENOR ESTOQUE
    printf("\nPreco do produto com maior estoque em um armazem = %.2lf\n", preco[i_maior]);
    printf("Menor estoque armazenado: %d\n\n", quantidade[i_menor[0]][i_menor[1]]);
    

    //CUSTO DE CADA ARMAZEM
    printf("\nCusto de cada armazem\n");
    for (int i = 0; i < produtos; i++)
    {
        for (int j = 0; j < armazem; j++)
        {
            printf("%.2lf ", quantidade[i][j]*preco[i]);
        }
        printf("\n");
    }

    return 0;
}
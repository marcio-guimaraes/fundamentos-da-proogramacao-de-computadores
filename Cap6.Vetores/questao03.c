#include <stdio.h>

int main()
{

    int c_produto[10], quantidade[10], c_cliente, count = 10, verificador_produto, quantidade_compra;

    for (int i = 0; i < count; i++)
    {
        printf("Codigo do produto: ");
        scanf("%d", &c_produto[i]);
        printf("Quantidade do produto: ");
        scanf("%d", &quantidade[i]);
    }

    while (1)
    {
        printf("\nCodigo do cliente: ");
        scanf("%d", &c_cliente);
        if (c_cliente == 0)
        {
            break;
        }

        printf("Codigo e quantidade do produto: ");
        scanf("%d %d", &verificador_produto, &quantidade_compra);

        int n = 0;
        for (int i = 0; i < count; i++)
        {
            if (verificador_produto == c_produto[i])
            {

                if (quantidade_compra <= quantidade[i])
                {
                    quantidade[i] = quantidade[i] - quantidade_compra;
                    printf("Compra finalizada\n");
                }
                else
                {
                    printf("Quantidade insuficiente\n");
                }
            }
            else
            {
                n++;
            }
            if (n == 10)
            {
                printf("Codigo inexistente\n");
            }
        }
    }

    return 0;
}
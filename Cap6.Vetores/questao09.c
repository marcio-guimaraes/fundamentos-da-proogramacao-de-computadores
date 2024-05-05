#include <stdio.h>

int main()
{

    int count = 10, codigo[count];
    char nome[count][30];
    float preco[count];

    for (int i = 0; i < count; i++)
    {
        printf("Nome do produto %d: ", i + 1);
        scanf("%s", nome[i]);
        printf("Codigo do produto %d: ", i + 1);
        scanf("%d", &codigo[i]);
        printf("Preco do produto %d: ", i + 1);
        scanf("%f", &preco[i]);
    }

    for (int i = 0; i < count; i++)
    {
        printf("\nNome = %s\tCodigo =%d\nPreco = %.2f\t", nome[i], codigo[i], preco[i]);

        if (preco[i] > 1000)
        {
            if (codigo[i] % 2 == 0)
                preco[i] = preco[i] * 1.2;
            else
                preco[i] = preco[i] * 1.1;
        }
        else if (codigo[i] % 2 == 0)
        {
            preco[i] = preco[i] * 1.15;
        }
        printf("Novo preco = %.2f\n", preco[i]);
    }

    return 0;
}
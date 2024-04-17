#include <stdio.h>

int main()
{

    int idade, contador = 0, a = 0, b = 0;
    float altura, peso, soma_idade=0;

    while (contador < 10)
    {
        contador++;
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso: "),
            scanf("%f", &peso);
        printf("Altura: ");
        scanf("%f", &altura);

        soma_idade += idade;

        if (peso > 90 && altura < 1.50)
        {
            a++;
        }
        if (idade >= 10 && idade <= 30 && altura > 1.90)
        {
            b++;
        }
        printf("\n");
    }

    printf("Idade media = %.2f\n", soma_idade / 10);
    printf("Quantidade de pessoas com peso superior a 90 e altura inferior a 1.50 = %d", a);
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos e mais de 1.90 de altura = %.2f%%", (float) b/10 * 100);
    return 0;
}
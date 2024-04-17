#include <stdio.h>

int main()
{

    int idade, maior = 0, menor = 500, quantidade_pessoas = 0, mulheres = 0, menor_salario = 50000, sexo_menor_salario, idade_menor_salario;
    char sexo;
    float salario, total_salarios = 0;

    while (1)
    {
        printf("Idade: ");
        scanf("%d", &idade);
        if (idade < 0)
        {
            break;
        }
        printf("Sexo(f/m): ");
        scanf(" %c", &sexo);
        printf("Salario: ");
        scanf("%f", &salario);

        total_salarios += salario;
        quantidade_pessoas++;

        if (idade > maior)
        {
            maior = idade;
        }
        if (idade < menor)
        {
            menor = idade;
        }

        if (salario < 200 && sexo == 'f')
        {
            mulheres++;
        }
        if (menor_salario > salario)
        {
            menor_salario = salario;
            idade_menor_salario = idade;
            sexo_menor_salario = sexo;
        }
    }

    printf("Media de salarios = %.2f\n", total_salarios / quantidade_pessoas);
    printf("Maior idade = %d\nMenor idade = %d\n", maior, menor);
    printf("Quantidade de mulheres que recebem menos de R$ 200 = %d\n", mulheres);
    printf("Idade e sexo da pessoa que tem o menor salario = %d, %c\n", idade_menor_salario, sexo_menor_salario);
    return 0;
}
#include <stdio.h>

int main()
{
    float salario, novo_salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if (salario <= 300)
    {
        novo_salario = salario * 1.5;
    }
    else if (salario > 300 && salario <= 500)
    {
        novo_salario = salario * 1.4;
    }
    else if (salario > 500 && salario <= 700)
    {
        novo_salario = salario * 1.3;
    }
    else if (salario > 700 && salario <= 800)
    {
        novo_salario = salario * 1.2;
    }
    else if (salario > 800 && salario <= 1000)
    {
        novo_salario = salario * 1.1;
    }
    else
    {
        novo_salario = salario * 1.05;
    }

    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}

#include <stdio.h>

int main(){

float salario;
printf("Valor do salario: ");
scanf("%f", &salario);

if (salario <=  300)
{
    printf("Salario com gratificacao = %.2f", salario * 1.15);
} else if (salario > 300 && salario < 600)
{
    printf("Salario com gratificacao = %.2f", salario * 1.10);
} else if (salario >= 600 && salario <= 900)
{
    printf("Salario com gratificacao = %.2f", salario * 1.05);
} else if (salario > 600)
{
    printf("Salario com gratificacao = %.2f", salario);
} else
{
    printf("Invalido");
}
return 0;
}
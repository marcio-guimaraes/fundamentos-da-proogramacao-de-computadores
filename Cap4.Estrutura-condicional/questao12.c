#include <stdio.h>

int main(){

float salario;
printf("Valor do salario: ");
scanf("%f", &salario);

if (salario <= 350)
{
    float gratificacao = 100;
    printf("Salario = %.2f", (salario+gratificacao)*0.93);

} else if (salario > 350 && salario < 600)
{
    float gratificacao = 75;
    printf("Salario = %.2f", (salario+gratificacao)*0.93);

} else if (salario >= 600 && salario <= 900)
{
    float gratificacao = 50;
    printf("Salario = %.2f", (salario+gratificacao)*0.93);

} else if (salario > 900)
{
    float gratificacao = 35;
    printf("Salario = %.2f", (salario+gratificacao)*0.93);

}
return 0;
}
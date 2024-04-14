#include <stdio.h>

int main(){

float salario;
printf("Media salarial: ");
scanf("%f", &salario);

if (salario > 400)
{
    printf("Credito = %.2f", salario * 0.3);
} else if (salario <= 400 && salario > 300)
{
    printf("Credito = %.2f", salario * 0.25);
} else if (salario <= 300 && salario > 200)
{
    printf("Credito = %.2f", salario * 0.2);
} else if (salario <= 200)
{
    printf("Credito = %2.f", salario * 0.1);
}





}
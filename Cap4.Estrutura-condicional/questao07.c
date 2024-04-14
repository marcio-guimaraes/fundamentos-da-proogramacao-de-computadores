#include <stdio.h>

int main(){

float salario;
printf("Valor do salario: ");
scanf("%f", &salario);

if (salario < 500)
{
    printf("Reajuste = %.2f", salario * 1.30);
} else
{
    printf("Voce nao tem direito a aumento");
}
return 0;
}
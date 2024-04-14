#include <stdio.h>

int main(){

float salario;

printf("Valor do salario: ");
scanf("%f", &salario);

if(salario <= 300){
    printf("%.2f", salario*1.35);
} else if (salario > 300)
{
    printf("%.2f", salario*1.15);
}
return 0;
}
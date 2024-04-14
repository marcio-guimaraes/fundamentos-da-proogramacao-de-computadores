#include <stdio.h>

int main(){

float reais, dolar, marco_alemao, libra_esterlina;
printf("Digite em reais a quantidade de dinheiro: ");
scanf("%f", &reais);

dolar = reais * 1.80;
marco_alemao = reais * 2.00;
libra_esterlina = reais * 3.57;

printf("Dolar = %2.f\nMarco Alemao = %.2f\nLibra Esterlina = %.2f\n", dolar, marco_alemao, libra_esterlina);
return 0;

}
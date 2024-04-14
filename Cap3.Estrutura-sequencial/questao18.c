#include <stdio.h>

int main(){

float celsius, farenheit;

printf("Digite a temperatura em graus celsius: ");
scanf("%f", &celsius);

farenheit = (9/5.0 * celsius) + 32;
printf("%f", farenheit);
return 0;
}
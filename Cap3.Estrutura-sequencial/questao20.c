#include <stdio.h>
#include <math.h>

int main(){
float angulo, escada_parede, tam_escada;

printf("Distancia da escada para a parede: ");
scanf("%f", &escada_parede);
printf("Medida do angulo: ");
scanf("%f", &angulo);

angulo = angulo * M_PI / 180;
tam_escada = escada_parede/(cos(angulo));
printf("Tamanho necessario para a escada: %.2f", tam_escada);

return 0;
}
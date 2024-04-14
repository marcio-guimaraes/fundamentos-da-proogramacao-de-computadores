#include <stdio.h>
#include <math.h>


int main(){

double raio, c, a, v;
printf("Digite o raio: ");
scanf("%lf", &raio);

c = 2 * M_PI* raio;
a = M_PI * pow(raio, 2);
v = 3.0/4 * M_PI * pow(raio, 3);

printf("Comprimento = %.3lf\nArea = %.3lf\nVolume = %.3lf\n", c, a, v );
return 0;
}
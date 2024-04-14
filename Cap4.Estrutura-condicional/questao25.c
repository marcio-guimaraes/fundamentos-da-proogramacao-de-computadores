#include <stdio.h>

int main(){

int extras, faltas, h, premiacao;
printf("Numero de horas extras (em minutos): ");
scanf("%d", &extras);
printf("Numero de faltas (em minutos): ");
scanf("%d", &faltas);


h = extras - (2/3 * (faltas));

if (600 > h)
{
    premiacao = 100;
} else if (h >= 600 && h< 1200)
{
    premiacao = 200; 
} else if (h >= 1200 && h < 1800)
{
    premiacao = 300;
} else if (h >= 1800 && h < 2400)
{
    premiacao = 400;
} else if (h >= 2400)
{
    premiacao = 500;
} else {
    printf("Erro!");
}


printf("Premiacao = R$ %d", premiacao);
return 0;
}
#include <stdio.h>

int main(){

float custo_fab;
printf("Custo de fabrica: ");
scanf("%f", &custo_fab);

if(custo_fab <= 12000)
{
    printf("Custo total: %.2f", custo_fab * 1.05);
} else if (custo_fab > 12000 && custo_fab <= 25000)
{
    printf("Custo total: %.2f", custo_fab * 1.25);
} else  if(custo_fab > 25000)
{
    printf("Custo total: %.2f", custo_fab * 1.35);
}
return 0;
}
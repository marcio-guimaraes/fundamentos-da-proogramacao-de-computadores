#include <stdio.h>

int main()
{
   printf("Questao 7:\n");
  float peso, emagrecer, engordar;
  printf("Informe sue peso: ");
  scanf("%f", &peso);
  engordar = peso*1.15;
  emagrecer = peso*0.80;
  printf("a)Seu peso caso engorde 15%%: %.2f\nb)Seu peso caso se emagrecer 20%%: %.2f\n", engordar, emagrecer);
  return 0;
}
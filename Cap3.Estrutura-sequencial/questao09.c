#include <stdio.h>

int main()
{

  printf("Questao 9:\n");
  double base_maior, base_menor, altura, x;
  scanf("%lf %lf %lf", &base_maior, &base_menor, &altura);

  x = (base_maior + base_menor) * altura / 2;

  printf("Resultado: %.3lf\n", x);

  return 0;
}
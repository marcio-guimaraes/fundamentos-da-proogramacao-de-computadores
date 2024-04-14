#include <stdio.h>

int main()
{
  printf("Questao 6:\n");
  float fixo, comissao, salario;
  printf("Informe o seu salario fixo: ");
  scanf("%f", &fixo);
  printf("Informe a quantidade de vendas realizadas: ");
  scanf("%f", &comissao);
  salario = fixo + (fixo * 0.04 * comissao);
  printf("Salario final: %.2f\n", salario);
  return 0;
}
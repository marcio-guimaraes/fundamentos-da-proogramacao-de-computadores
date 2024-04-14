#include <stdio.h>

int main()
{
  printf("Questao 4:\n");
  int a, b, media;
  scanf("%i %i", &a, &b);
  media = (a * 2 + b * 3) / 5;
  printf("Resultado = %i\n", media);
  return 0;
}
#include <stdio.h>

int main(){
  printf("Questao 14:\n");
  printf("Digite seu ano de nascimento e depois o ano atual: ");
  int nascimento, atual, ano, mes, semana, dias;
  scanf("%d %d",&nascimento, &atual);
  ano = atual - nascimento;
  mes = ano*12;
  semana = mes*4;
  dias = semana*7;
  printf("Anos : %d\nMeses: %d\nSemanas: %d\nDias: %d\n", ano, mes, semana, dias);
  return 0;
}
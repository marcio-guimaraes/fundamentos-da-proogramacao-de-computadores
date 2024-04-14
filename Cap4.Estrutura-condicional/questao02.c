#include <stdio.h>

int main(){

float nota1, nota2, media;

printf("Nota 1: ");
scanf("%f", &nota1);
printf("Nota 2: ");
scanf("%f", &nota2);

media = (nota1 + nota2)/2;

if (media < 0 && media < 3 ){
    printf("Reprovado com nota = \n", media);
} else if (media > 3 && media< 7 ){
    printf("Exame com nota = \n", media);
} else if (media > 7 && media < 10){
    printf("Aprovado com nota = \n", media);
} else {
    printf("Invalido");
}
return 0;
}
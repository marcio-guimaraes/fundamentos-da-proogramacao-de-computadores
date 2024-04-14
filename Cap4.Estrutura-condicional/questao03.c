#include <stdio.h>

int main(){

int numero1, numero2;
printf("Numero 1: ");
scanf("%d", &numero1);
printf("Numero 2: ");
scanf("%d", &numero2);

if (numero1 < numero2)
{
   printf("%d", numero1);
} else if (numero2 < numero1)
{
    printf("%d", numero2);
} else {
    printf("Invalido");
}
return 0;
}
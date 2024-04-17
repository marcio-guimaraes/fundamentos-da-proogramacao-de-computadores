#include <stdio.h>

int main(){

int numero, contador=0;
scanf("%d", &numero);

while (contador <= 10)
{
    printf("%d x %d = %d\n", numero, contador, numero*contador);
    contador++;
}

    return 0;
}
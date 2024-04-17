#include <stdio.h>

int main(){

    int numero, maior=0, menor=1000;

    while (1)
    {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            break;
        } else if (numero < 0)
        {
            printf("Numero negativos sao invalidos!\n");
            continue;
        }

        if (numero > maior)
        {
            maior = numero;
        } else if (numero < menor)
        {
            menor = numero;
        }  
    }
    
    
    printf("Maior numero= %d\n", maior);
    printf("Menor numero= %d\n", menor);
    return 0;
}
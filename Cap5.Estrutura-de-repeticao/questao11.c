#include <stdio.h>

int main(){

    float valor, percentual=0.03;
    int parcelas = 6;

    scanf("%f", &valor);
    printf("Preco para compra a vista = %.2f\n", valor * 0.8);

    while (parcelas <= 60)
    {
        printf("Parcelas = %d\tAcrescimo sobre o produto final = R$ %.2f\n", parcelas, percentual*valor);
        percentual = percentual + 0.03;
        parcelas = parcelas + 6;
    }
    
    return 0;
}
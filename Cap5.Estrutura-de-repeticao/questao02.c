#include <stdio.h>

int main(){

    float valor=5;
    int quantidade=120, contador=0;

    while(valor >= 1){
        printf("%d seriam vendidos por R$: %.2f\t", quantidade, valor);
        quantidade += 26;
        valor -= 0.5;
        contador++;
        if (contador == 2) //Apenas para deixar mais organizado
        {
            printf("\n");
            contador = 0;
        }
    }

    return 0;
}
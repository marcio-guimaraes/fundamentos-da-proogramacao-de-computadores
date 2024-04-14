#include <stdio.h>
#include <math.h>

int main (){

    double numero1, numero2, resultado;
    char operacao;

    printf("Numero 1: \n");
    scanf("%lf", &numero1);
    printf("Numero 2: \n");
    scanf("%lf", &numero2);
    printf("Escolha a operacao: a, b ou c\n");
    scanf(" %c", &operacao);

    switch (operacao)
    {
    case 'a':
        resultado = pow(numero1, numero2);
        printf("Resultado = %lf", resultado);
        break;

    case 'b':
        numero1 = sqrt(numero1);
        numero2 = sqrt(numero2);
        printf("%lf %lf", numero1, numero2);
        break;

    case 'c':
        numero1 = cbrt(numero1);
        numero2 = cbrt(numero2);
        printf("%lf %lf", numero1, numero2);
        break;

    default:
        printf("Invalido");
        return 1;
    }
    return 0;
}

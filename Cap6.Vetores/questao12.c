#include <stdio.h>

int main()
{

    int numeros[5], resultado = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Numero: ");
        scanf("%d", &numeros[i]);
        resultado += numeros[i];
    }

    printf("%d + %d + %d + %d + %d = %d\n", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4], resultado);

    return 0;
}
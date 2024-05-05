#include <stdio.h>

int main()
{

    int count = 10, numeros[count], pares[10] = {0}, impares[10] = {0};

    int indice1 = 0, indice2 = 0;
    for (int i = 0; i < count; i++)
    {
        printf("Numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            pares[indice1] = numeros[i];
            indice1++;
        }
        else if (numeros[i] % 2 != 0)
        {
            impares[indice2] = numeros[i];
            indice2++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("Par = %d\n", pares[i]);
    }
    for (int i = 0; i < count; i++)
    {
        printf("Impares = %d\n", impares[i]);
    }

    return 0;
}
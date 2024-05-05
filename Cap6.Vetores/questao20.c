#include <stdio.h>

int main()
{

    int numeros[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Numero: ");
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > 0)
        {
            printf("%d\n", numeros[i]);
        }
    }

    return 0;
}
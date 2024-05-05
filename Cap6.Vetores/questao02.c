#include <stdio.h>

int main()
{

    int numero[7], count = 7;

    for (int i = 0; i < count; i++)
    {
        printf("Numero: ");
        scanf("%d", &numero[i]);
    }

    printf("Multiplos de 2\n");
    for (int i = 0; i < count; i++)
    {
        if (numero[i] % 2 == 0)
        {
            printf("%d; ", numero[i]);
        }
    }

    printf("\nMultiplos de 3\n");
    for (int i = 0; i < count; i++)
    {
        if (numero[i] % 3 == 0)
        {
            printf("%d; ", numero[i]);
        }
    }

    printf("\nMultiplos de 2 e 3\n");
    for (int i = 0; i < count; i++)
    {
        if (numero[i] % 2 == 0 && numero[i] % 3 == 0)
        {
            printf("%d; ", numero[i]);
        }
    }

    return 0;
}
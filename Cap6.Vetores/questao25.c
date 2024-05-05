#include <stdio.h>

int main()
{

    int count = 5, maior = 0;
    int valores[count];

    for (int i = 0; i < count; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);
        if (valores[i] > maior)
        {
            maior = valores[i];
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%.2f\n", (float)valores[i] / maior);
    }

    return 0;
}
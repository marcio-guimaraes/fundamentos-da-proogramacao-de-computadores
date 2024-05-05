#include <stdio.h>

int main()
{

    int count = 10, soma_vetor2 = 0, divisores = 0, n;
    int vetor1[count], vetor2[5], vetor_resultante1[count], vetor_resultante2[count];

    for (int i = 0; i < count; i++)
    {
        vetor_resultante1[i] = -1;
        vetor_resultante2[i] = -1;
    }

    // RECEBENDO OS VALORES DOS VETORES
    for (int i = 0; i < count; i++)
    {
        printf("Numeros vetor 1: ");
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Numeros vetor 2: ");
        scanf("%d", &vetor2[i]);
        soma_vetor2 += vetor2[i];
    }

    // SOMA DOS NUMEROS PARES DO PRIMEIRO VETOR COM TODOS DO SEGUNDO VETOR
    n = 0;
    for (int i = 0; i < count; i++)
    {
        if (vetor1[i] % 2 == 0)
        {
            vetor_resultante1[n] = vetor1[i] + soma_vetor2;
            n++;
        }
    }

    // QUANTIDADE DE DIVISORES QUE CADA NUMERO IMPAR DO PRIMEIRO VETOR TEM
    n = 0;
    int indice3 = 0;
    for (int i = 0; i < count; i++)
    {
        if (vetor1[i] % 2 != 0)
        {
            for (int n = 0; n < 5; n++)
            {
                if (vetor1[i] % vetor2[n] == 0)
                {
                    divisores++;
                }
            }
            vetor_resultante2[indice3] = divisores;
            indice3++;
            divisores = 0;
        }
    }

    // PRINTANDO OS DOIS VETORES RESULTANTES
    printf("\n\n");
    for (int i = 0; i < count; i++)
    {
        printf("Resultante 1 %d\n", vetor_resultante1[i]);
    }

    printf("\n\n");
    for (int i = 0; i < count; i++)
    {
        printf("Resultante 2 %d\n", vetor_resultante2[i]);
    }
    printf("Programa finalizado\n");

    return 0;
}
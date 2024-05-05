#include <stdio.h>

int main()
{

    int vetorA[10], vetorB[10] = {0}, i = 0, n = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Numero: ");
        scanf("%d", &vetorA[i]);

        if (vetorA[i] > 0)
        {
            vetorB[n] = vetorA[i];
            n++;
        }
    }

    i=0;
    while (i < 10)
    {
        if (vetorB[i] == 0)
            break;

        printf("Vetor B = %d\n", vetorB[i]);
        i++;
    }

    return 0;
}
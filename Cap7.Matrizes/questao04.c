#include <stdio.h>
#include <string.h>

#define linha 15
#define coluna 5

int main()
{
    double notas[linha][coluna], total;
    char nomes[linha][15];

    for (int i = 0; i < linha; i++)
    {
        fgets(nomes[i], 15, stdin);
        nomes[i][strlen(nomes[i])-1] = '\0';

        for (int j = 0; j < coluna; j++)
        {
            scanf("%lf", &notas[i][j]);
        }
        getchar();
    }

    for (int i = 0; i < linha; i++)
    {
        double soma = 0, media;
        total = 0;
        char situacao[20];
        for (int j = 0; j < coluna; j++)
        {
            soma += notas[i][j];
        }
        media = soma / 5;
        if (media < 6)
        {
            strcpy(situacao, "Reprovado");
        }
        else if (6 <= media && media <= 7)
        {
            strcpy(situacao, "Exame");
        }
        else
        {
            strcpy(situacao, "Aprovado");
        }
        printf("%s - Media: %.2lf\nSituacao: %s\n", nomes[i], media, situacao);
        total += media;
    }

    printf("Media da classe: %.2lf\n", total);

    return 0;
}
#include <stdio.h>

int main()
{

    char nome[6][30], *situacao[6];
    float nota1[6], nota2[6], media[6], soma_classe = 0, aprovados = 0, exame = 0, reprovados = 0;

    // RECEBENDO VALORES
    for (int i = 0; i < 6; i++)
    {
        printf("Nome: ");
        scanf("%s", nome[i]);
        printf("Nota 1: ");
        scanf("%f", &nota1[i]);
        printf("Nota 2: ");
        scanf("%f", &nota2[i]);
    }

    // OBTENDO SITUAÇAO E PERCENTUAL
    for (int i = 0; i < 6; i++)
    {
        media[i] = (nota1[i] + nota2[i]) / 2;
        soma_classe += media[i];
        if (media[i] >= 7)
        {
            situacao[i] = "Aprovado";
            aprovados++;
        }
        else if (media[i] < 7 && media[i] >= 6)
        {
            situacao[i] = "Exame";
            exame++;
        }
        else if (media[i] < 6)
        {
            situacao[i] = "Reprovado";
            reprovados++;
        }
    }

    printf("\n\tALUNO\tPROVA 1\tPROVA 2\tMEDIA\tSITUACAO\n");
    for (int i = 0; i < 6; i++)
    {
        printf("\t%s\t%.1f\t%.1f\t%.1f\t%s\n", nome[i], nota1[i], nota2[i], media[i], situacao[i]);
    }

    printf("Media da classe = %.1f\n", soma_classe / 6);
    printf("Percentual de alunos aprovados = %.2f\n", aprovados / 6 * 100);
    printf("Percentual de alunos de exame = %.2f\n", exame / 6 * 100);
    printf("Percentual de alunos reprovados = %.2f\n", reprovados / 6 * 100);

    return 0;
}
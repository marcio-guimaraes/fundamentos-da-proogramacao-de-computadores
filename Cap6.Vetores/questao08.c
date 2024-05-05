#include <stdio.h>

int main()
{

    int count = 3, i_maior;
    float notas[count];
    char nome_aluno[count][30];

    for (int i = 0; i < count; i++)
    {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", nome_aluno[i]);
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float maior = notas[0];
    for (int i = 0; i < count; i++)
    {
        if (notas[i] > maior)
        {
            maior = notas[i];
            i_maior = i;
        }

        if (notas[i] < 7)
        {
            printf("%s precisa tirar no %.1f exame final\n", nome_aluno[i], 10 - notas[i]);
        }
    }
    printf("%s teve a maior nota = %.1f\n", nome_aluno[i_maior], maior);

    return 0;
}
#include <stdio.h>

int main()
{

    char resposta, sexo;
    int count = 0, sim = 0, nao = 0, mulheres = 0, homens = 0, homens_nao = 0;

    while (count < 10)
    {
        printf("Resposta: ");
        scanf(" %c", &resposta);
        printf("Sexo: ");
        scanf(" %c", &sexo);

        if (resposta == 's')
        {
            sim++;
            if (sexo == 'm' && resposta)
            {
                mulheres++;
            }
        }
        else if (resposta == 'n')
        {
            nao++;
        }

        if (sexo == 'h')
        {
            homens++;

            if (resposta == 'n')
            {
                homens_nao++;
            }
        }
        count++;
    }

    printf("Numero de pessoas que responderam sim = %d\n", sim);
    printf("Numero de pessoas que responderam nao = %d\n", nao);
    printf("Numero de mulheres que responderam sim = %d\n", mulheres);
    printf("Porcentagem de homens que responderam nao, dentre os homens = %.2f%%\n", (float) homens_nao/homens*100);
    return 0;
}
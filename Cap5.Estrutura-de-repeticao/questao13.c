#include <stdio.h>

int main()
{

//1-10, 10-20, 20-30, <30
    int idade, count = 0;
    float peso, faixa1=0, faixa2=0, faixa3=0, faixa4=0, media1=0, media2=0, media3=0, media4=0;

    while (count < 2)
    {
        count++;
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso: ");
        scanf("%f", &peso);

        if (idade >=1 && idade <= 10)
        {
            faixa1 = faixa1 + peso;
            media1++;
        } else if (idade >= 11 && idade <= 20)
        {
            faixa2 = faixa2 + peso;
            media2++;
        } else if (idade >= 21 && idade <= 30)
        {
            faixa3 = faixa3 + peso;
            media3++;
        } else if (idade > 30)
        {
            faixa4 = faixa4 + peso;
            media4++;
        }   
    }

    printf("Media de pesos da faixa-etaria 1 = %.2f\n", media1 > 0 ? faixa1/media1:0);
    printf("Media de pesos da faixa-etaria 2 = %.2f\n", media2 > 0 ? faixa2/media2:0);
    printf("Media de pesos da faixa-etaria 3 = %.2f\n", media3 > 0 ? faixa3/media3:0);
    printf("Media de pesos da faixa-etaria 4 = %.2f\n", media4 > 0 ? faixa4/media4:0);

    return 0;
}
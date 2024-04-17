#include <stdio.h>

int main(){

    int idade, opniao, count=0, otimo=0, idade_otimo=0, regular=0, bom=0;
    //3-Ótimo, 2-Bom, 1-Regular

    while (count < 15)
    {
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Opniao: ");
        scanf("%d", &opniao);

        if (opniao == 3)
        {
            otimo++;
            idade_otimo = idade_otimo + idade;
        } if (opniao == 1)
        {
            regular++;
        } if (opniao == 2)
        {
            bom++;
        }
        count++;
    }
    
    printf("Media de idade das pessoas que responderam otimo = %.2f\n", (float) idade_otimo/otimo);
    printf("Quantidade de pessoas que responderam regular = %d\n", regular);
    printf("Porcentagem de pessoas que responderam bom = %.2f%%\n", (float) bom/count*100);
    return 0;
}
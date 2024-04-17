#include <stdio.h>

int main(){

    int voto, candidato1=0, candidato2=0, candidato3=0, candidato4=0, nulo=0, branco=0, total=0;

    while (1)
    {
        printf("Digite o voto: ");
        scanf("%d", &voto);

        if (voto == 0)
        {
            break;
        } else if (voto == 1)
        {
            candidato1++;
        } else if (voto == 2)
        {
            candidato2++;
        } else if (voto == 3)
        {
            candidato3++;
        } else if (voto == 4)
        {
            candidato4++;
        } else if (voto == 5)
        {
            nulo++;
        } else if (voto == 6)
        {
            branco++;
        } else
        {
            printf("Codigo invalido\n");
            continue;
        }
        
        total++;        
    }

    printf("Total de votos para o candidato 1 = %d\n", candidato1);
    printf("Total de votos para o candidato 2 = %d\n", candidato2);
    printf("Total de votos para o candidato 3 = %d\n", candidato3);
    printf("Total de votos para o candidato 4 = %d\n", candidato4);
    printf("Total de votos nulos = %d\n", nulo);
    printf("Total de votos brancos = %d\n",branco);
    printf("Nulos sobre brancos = %.2f\n", branco > 0 ? (float) nulo/branco:0);
    printf("Porcentagem de brancos sobre o total = %.2f%%\n", (float)branco/total);
    

    return 0;
}
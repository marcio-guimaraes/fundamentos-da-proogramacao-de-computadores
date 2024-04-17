#include <stdio.h>

int main(){

    int nCanal, nPessoas, c4=0, c5=0, c7=0,c12=0, count=0;

    while (1)
    {
        printf("Canal: ");
        scanf("%d", &nCanal);
        if (nCanal == 0)
        {
            break;
        } 
        printf("Numero de pessoas: ");
        scanf("%d", &nPessoas);

        if (nCanal == 4)
        {
            c4 = c4 + nPessoas;
        } else if (nCanal == 5)
        {
            c5 = c5 + nPessoas;
        } else if (nCanal == 7)
        {
            c7 = c7 + nPessoas;
        } else if (nCanal == 12)
        {
            c12 = c12 + nPessoas;
        }
        else
        {
            printf("Canal invalido\n");
            continue;
        }
        
        count = count + nPessoas;
    }

    printf("Porcentagem Canal 4 = %.2f%%\n", (float) c4/count*100);
    printf("Porcentagem Canal 5 = %.2f%%\n", (float) c5/count*100);
    printf("Porcentagem Canal 7 = %.2f%%\n", (float) c7/count*100);
    printf("Porcentagem Canal 12 = %.2f%%\n", (float) c12/count*100);
    return 0;
}
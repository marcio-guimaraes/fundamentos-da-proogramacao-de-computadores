#include <stdio.h>

int main(){

    char acao;
    float vCompra, vVenda, lucro_total=0;
    int s1000=0, i200=0;

    while (1)
    {
        printf("Acao: ");
        scanf(" %c", &acao);
        if (acao == 'f')
        {
            break;
        }
        printf("Valor da compra: ");
        scanf("%f", &vCompra);
        printf("Valor da venda: ");
        scanf("%f", &vVenda);

        if (vVenda - vCompra > 1000)
        {
            s1000++;
        } else if (vVenda - vCompra < 200)
        {
            i200++;
        }

        printf("Lucro da acao %c =  %.2f\n", acao, vVenda - vCompra);
        lucro_total = lucro_total + (vVenda - vCompra);
    }
    


    printf("Quantidade de acoes com lucro superior a 1000 = %d\n", s1000);
    printf("Quantiade de acoes com lucro inferior a 200 = %d\n", i200);
    printf("Lucro total = %.2f", lucro_total);
    return 0;
}
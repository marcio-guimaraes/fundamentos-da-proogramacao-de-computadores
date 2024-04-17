#include <stdio.h>

int main(){

    int cod_cliente, tipo_investimento;
    float valor, total_investido=0, total_juros;

    while (1)
    {
        printf("Codigo do cliente: ");
        scanf("%d", &cod_cliente);
        if (cod_cliente <= 0)
        {
            break;
        }
        printf("Tipo de investimento: ");
        scanf("%d", &tipo_investimento);
        printf("Valor: ");
        scanf("%f", &valor);

        if (tipo_investimento == 1)
        {
            printf("Rendimento mensal = R$ %.2f\n", valor*0.015);
            total_investido = total_investido + valor;
            total_juros = total_juros + valor*0.015;
        } else if (tipo_investimento == 2)
        {
            printf("Rendimento mensal = R$ %.2f\n", valor*0.02);
            total_investido = total_investido + valor;
            total_juros = total_juros + valor*0.02;
        } else if (tipo_investimento == 3)
        {
            printf("Rendimento mensal = R$ %.2f\n", valor*0.04);
            total_investido = total_investido + valor;
            total_juros = total_juros + valor*0.04;
        }
    }
    
    printf("Total investido =  %.2f\n", total_investido);
    printf("Total de juros pagos %.2f\n", total_juros);

    return 0;
}
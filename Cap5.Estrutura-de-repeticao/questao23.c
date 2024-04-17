#include <stdio.h>

int main(){

    int opcao, meses;
    float salario;

    while (1)
    {
        printf("Opcao desejada: ");
        scanf("%d", &opcao);
        if (opcao == 4)
        {
            break;
        }
        printf("Salario: ");
        scanf("%f", &salario);

        if (opcao == 1)
        {
            if (salario <  210)
            {
                printf("Novo salario = %.2f\n", salario*1.15);
            } else if (salario >= 210 && salario <= 600)
            {
                printf("Novo salario = %.2f\n", salario*1.10);
            } else if (salario > 600)
            {
                printf("Novo salario = %.2f\n", salario*1.05);
            }
        }

        if (opcao == 2)
        {
            printf("Valor das feris = %.2f\n", salario+(salario/3));
        }

        if (opcao == 3)
        {
           printf("Meses: ");
           scanf("%d", &meses);
           if (meses > 12)
           {
                printf("Meses invalidos!\n");
                continue;
           }
           
           printf("Valor do decimo terceiro = %.2f\n", salario*meses/12); 
        }  
    }
    

    return 0;
}
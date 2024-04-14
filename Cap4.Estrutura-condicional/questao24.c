#include<stdio.h>

int main(){

int categoria;
float preco, novo_preco;
char situacao;

printf("Preco do produto: ");
scanf("%f", &preco);
printf("Categoria do produto: ");
scanf("%d", &categoria);
printf("Situacao do produto: ");
scanf(" %c", &situacao);

if (situacao == 'r')
{
    printf("\nPrecisa de refrigeracao\n");
} else if (situacao == 'n')
{
    printf("\nNao precisa de refrigeracao\n");
}




if (preco <= 25)
{
    switch (categoria)
    {
    case 1:
        preco = preco * 1.05;
        break;

    case 2:
    preco = preco * 1.08;
    break;

    case 3: 
    preco = preco * 1.10;
    break;

    default:
    printf("Invalido");
        break;
    }  
} 

else if (preco > 25)
{
    switch (categoria)
    {
    case 1:
        preco = preco * 1.12;
        break;

    case 2:
    preco = preco * 1.15;
    break;

    case 3: 
    preco = preco * 1.18;
    break;

    default:
    printf("Invalido");
        break;
    }  
} else {
    printf("Erro!");
}


if (categoria == 2 || situacao == 'r')
{
    novo_preco = preco * 0.95;
} else
{
    novo_preco = preco * 0.92;
}

if (novo_preco <= 50)
{
    printf("Barato\n");
} else if (novo_preco > 50 && novo_preco < 120)
{
    printf("Normal\n");
} else if (novo_preco >= 120)
{
    printf("Caro\n");
}




printf("Preco = R$%.2f\nCategoria = %d\n", preco, categoria);
return 0;
}
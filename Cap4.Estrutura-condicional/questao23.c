#include <stdio.h>

int main(){

int codigo, quant_comprada;
float preco_unit, preco_nota, desconto;

printf("Codigo do produto: ");
scanf("%d", &codigo);
printf("Quantidade comprada: ");
scanf("%d", &quant_comprada);

if (codigo > 0 && codigo <=10)
{
    preco_unit = 10;
    preco_nota = quant_comprada*preco_unit;
} else if (codigo >= 11 && codigo <= 20)
{
    preco_unit = 15;
    preco_nota = quant_comprada*preco_unit;
} else if (codigo >= 21 && codigo <= 30)
{
    preco_unit = 20;
    preco_nota = quant_comprada*preco_unit;
} else if (codigo >= 21 && codigo <= 30)
{
    preco_unit = 30;
    preco_nota = quant_comprada*preco_unit;
} else {
    printf("Invalido");
}



if (preco_nota < 250)
{
 desconto = preco_nota*0.95;
} else if (preco_nota > 250 && preco_nota <= 500)
{
    desconto = preco_nota*0.90;
} else if (preco_nota > 500)
{
    desconto = preco_nota*0.85;
}
 printf("Preco unitario = %.2f\nPreco da nota = %.2f\nDesconto = %.2f\nValor final = %.2f", preco_unit, preco_nota, desconto, preco_nota-desconto);
return 0;
}
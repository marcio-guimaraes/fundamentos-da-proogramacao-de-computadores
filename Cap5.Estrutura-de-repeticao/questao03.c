#include <stdio.h>

int main(){

    int count=1,idade;
    int faixa1=0, faixa2=0, faixa3=0, faixa4=0, faixa5=0;

while(count <= 8){
    count++;
    scanf("%d", &idade);
    if (idade <= 15)
    {
        faixa1++;
    } else if (idade >= 16 && idade <= 30 )
    {
        faixa2++;
    } else if (idade >= 31 && idade <= 45)
    {
        faixa3++;
    } else if (idade >=46 && idade <= 60)
    {
        faixa4++;
    } else if (idade )
    {
        faixa5++;
    }   
}

printf("Faixa 1: %d\nFaixa 2: %d\nFaixa 3: %d\nFaixa 4: %d\nFaixa 5: %d\n", faixa1, faixa2, faixa3, faixa4, faixa5);
float total;
total = (float)faixa1 + (float)faixa2 + (float)faixa3 + (float)faixa4 + (float)faixa5;
printf("Porcentagem da primeira faixa-etaria: %.2f%%\n", (faixa1/total)*100);
printf("Porcentagem da ultima faixa-etaria: %.2f%%\n", (faixa5/total)*100);


    return 0;
}

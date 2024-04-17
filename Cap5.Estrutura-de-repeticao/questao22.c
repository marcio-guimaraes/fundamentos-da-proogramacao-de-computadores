#include <stdio.h>

int main(){

    int idade, mais50=0, count=0;
    float altura;

    while (1)
    {
        printf("Idade: ");
        scanf("%d", &idade);
        if (idade <= 0)
        {
            break;
        }
        
        printf("Altura: ");
        scanf("%f", &altura);

        if (idade > 50)
        {
            mais50 = mais50 + altura;
            count++;
        }
    }

    printf("Media de altura das pessoas com mais de 50 anos = %.2f\n", mais50/count);
    

    return 0;
}
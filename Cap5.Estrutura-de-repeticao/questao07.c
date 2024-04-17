#include <stdio.h>

int main()
{

    int idade, imais50 = 0, contador = 0;
    float altura, peso, altura_media = 0, media_altura = 0, inferior40kg=0;

    while (contador < 5)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite o peso: ");
        scanf("%f", &peso);

        if (idade > 50)
        {
            imais50++;
        }
        else if (idade > 10 && idade < 20)
        {
            altura_media += altura;
            media_altura++;
        } else if (peso < 40)
        {
           inferior40kg++; 
        }
        
        altura=0;
        contador++;
        printf("\n");
    }

    printf("Quantidade de pessoas com idade superior a 50 anos = %d\n", imais50);
    printf("Media de altura das pessoas com idade entre 10 e 20 = %.2f\n", altura_media/media_altura);
    printf("Porcentagem das pessoas com peso inferior a 40kg = %.2f%%\n", inferior40kg/contador*100);
    return 0;
}
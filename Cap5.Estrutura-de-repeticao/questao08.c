#include <stdio.h>

int main()
{

    int idade, contador = 0, a = 0, olhos_azuis = 0, ruivos = 0;
    float altura, peso, media_baixinhos=0, idade_baixinhos=0;
    char olho, cabelo;

    while (contador < 6)
    {
        contador++;
        printf("Pessoa %d\n", contador);

        printf("Idade: ");
        scanf("%d", &idade);
        printf("Altura: ");
        scanf("%f", &altura);
        printf("Peso: ");
        scanf("%f", &peso);
        printf("Cor dos olhos: ");
        scanf(" %c", &olho);
        printf("Cor do cabelo: ");
        scanf(" %c", &cabelo);

        if (idade > 50 && peso < 60)
        {
            a++;
        }
        if (altura > 1.5)
        {
            media_baixinhos++;
            idade_baixinhos += idade;
        }
        if (olho == 'A')
        {
            olhos_azuis++;
        }
        if (cabelo == 'R' && olho != 'A')
        {
            ruivos++;
        }
        printf("\n");
    }


    printf("Maiores de 50 com peso inferior a 50= %d\n", a);
    printf("Idade media dos inferiores a 1.50m = %.1f\n", idade_baixinhos/media_baixinhos);
    printf("Porcentagem de pessoas com olhos azuis = %.2f\n", (float)olhos_azuis/contador*100);
    printf("Ruivos com olhos diferentes de azul = %d\n", ruivos);
    return 0;
}
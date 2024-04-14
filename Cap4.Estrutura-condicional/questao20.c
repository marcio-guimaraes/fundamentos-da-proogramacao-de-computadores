#include <stdio.h>
int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade > 0 && idade < 5)
    {
        printf("Nao pode competir");
    }
    else if (idade > 5 && idade <= 7)
    {
        printf("Infantil");
    }
    else if (idade > 7 && idade <= 10)
    {
        printf("Juvenil");
    }
    else if (idade > 10 && idade <= 15)
    {
        printf("Adolescente");
    }
    else if (idade > 15 && idade <= 30)
    {
        printf("Adulto");
    }
    else if (idade > 30)
    {
        printf("Senior");
    }
    return 0;
}
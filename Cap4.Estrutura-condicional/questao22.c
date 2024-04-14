#include <stdio.h>

int main() {
    int idade;
    float peso;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    printf("Digite o peso: ");
    scanf("%f", &peso);
    
    int g_risco;
    
    if (idade < 20) {
        if (peso <= 60)
            g_risco = 9;
        else if (peso <= 90)
            g_risco = 8;
        else
            g_risco = 7;
    } else if (idade <= 50) {
        if (peso <= 60)
            g_risco = 6;
        else if (peso <= 90)
            g_risco = 5;
        else
            g_risco = 4;
    } else {
        if (peso <= 60)
            g_risco = 3;
        else if (peso <= 90)
            g_risco = 2;
        else
            g_risco = 1;
    }
    
    printf("Grupo de risco: %d\n", g_risco);
    
    return 0;
}

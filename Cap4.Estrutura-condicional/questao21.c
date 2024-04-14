#include <stdio.h>

int main() {
    float preco;
    int cod_origem;
    
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    
    printf("Digite o codigo de origem do produto: ");
    scanf("%d", &cod_origem);
    
    if (cod_origem == 1) {
        printf("Procedencia: Sul\n");
    } else if (cod_origem == 2) {
        printf("Procedencia: Norte\n");
    } else if (cod_origem == 3) {
        printf("Procedencia: Leste\n");
    } else if (cod_origem == 4) {
        printf("Procedencia: Oeste\n");
    } else if (cod_origem == 5 || cod_origem == 6) {
        printf("Procedencia: Nordeste\n");
    } else if (cod_origem == 7 || cod_origem == 8 || cod_origem == 9) {
        printf("Procedencia: Sudeste\n");
    } else if (cod_origem >= 10 && cod_origem <= 20) {
        printf("Procedencia: Centro-oeste\n");
    } else if (cod_origem >= 21 && cod_origem <= 30) {
        printf("Procedencia: Nordeste\n");
    } else {
        printf("Codigo de origem invalido.\n");
    }
    return 0;
}

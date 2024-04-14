#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Maioridade alcançada.\n");
    } else {
        printf("Você não é maior de idade.\n");
    }
    
    return 0;
}

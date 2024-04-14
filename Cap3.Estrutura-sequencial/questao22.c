#include <stdio.h>

int main(){
int n;
float nd;

printf("Numero de lados: ");
scanf("%d", &n);
nd = n * (n-3) / 2.0;

printf("Numero de diagonais = %.2f", nd);
return 0;
}
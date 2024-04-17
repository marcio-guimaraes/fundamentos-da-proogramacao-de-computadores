#include <stdio.h>

int main(){

    int numero, contador=1, i=1, verificador=0;

while(contador <= 10){
    scanf("%d", &numero);
    while(i <= numero){
        if (numero % i == 0)
        {
            verificador++;
        } 
        i++;
    }
     
     
     
     if (verificador == 2 || numero == 1)
        {
            printf("%d - primo\n", numero);
        } else
        {
            printf("%d - Nao primo\n", numero);
        }
        i=1;
        verificador=0;
}

    return 0;
}
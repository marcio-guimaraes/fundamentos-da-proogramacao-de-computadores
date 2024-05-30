#include <stdio.h>

#define linha 4
#define coluna 6

int main(){

    int m[linha][coluna], n[coluna][linha], soma[linha]={0};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &m[i][j]);
            soma[i] += m[i][j];
        }
    }


    //Valor contrário para linha e coluna
    for (int i = 0; i < coluna; i++)
    {
        for (int j = 0; j < linha; j++)
        {
            scanf("%d", &n[i][j]);
            soma[j] += n[i][j];
        }
    }
    
    for (int i = 0; i < linha; i++)
    {
        printf("%d\n", soma[i]);
    }
    

    return 0;
}
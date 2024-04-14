#include <stdio.h>

int main()
{
    int senha_digitada;

    printf("Digite a senha: ");
    scanf("%d", &senha_digitada);

    if (senha_digitada == 4531)
    {
        printf("Permissao de acesso concedida.\n");
    }
    else
    {
        printf("Acesso negado. Senha incorreta.\n");
    }
    return 0;
}

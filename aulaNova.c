#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    int idade;

    printf("Ola! Qual o seu nome: \n");
    scanf("%s", nome);

    printf("Qual a sua idade: \n");
    scanf("%d", &idade);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

    if (idade >= 18)
    {
        printf("Voce e maior de idade!\n");
    }
    else
    {
        printf("Voce e menor de idade!\n");
    }


    return 0;

}
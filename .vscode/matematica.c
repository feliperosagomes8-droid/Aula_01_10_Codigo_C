//Projeto simples de um Calculadora feita em C para entender sua sintaxe

//Primeiro importamos algumas biblioteca dos quais precisaresmos usar.
#include <stdio.h>
#include <stdlib.h>

//Logo em seguida iremos abrir nosso código função principal que é o int main(){}
int main() {
    //Aqui precisaremos guardar alguns valores para que eles posam ser calculados uns com os outros .
    //Então iremos guardar esse valores nas variáveis numero1, número2 e escolha.
    int escolha;
    int numero1;
    int numero2;
    
    //Aqui iremos fazer um menu simples e interativo com o usuário com as opções que ele pode escolher de calculo.
    printf("-----CALCULADORA SIMPLES-------\n");
    printf("1- soma \n");
    printf("2-subtracao \n");
    printf("3-multiplicacao \n ");
    printf("4-divicao \n");
    printf("5- sair do programa \n");
    //Com o scanf iremos ler a escolha do usuário para saber sua escolha de cálculo.
    scanf("%i",&escolha);
    //Aqui aremos a primeira conta que o usuário escolher no caso a soma 
    if (escolha==1)
    {
        printf("Digite o primeiro numero da soma: ");
        scanf("%i",&numero1);
        printf("Digite o segundo numero da soma: ");
        scanf("%i",&numero2);
        //Nessa condição se o usuário escolher a opção um ele digitará o primeiro e o segundo número 


        double resultado= numero1+numero2;
        //Quando o scanf ler os número o programa fará o cálculo selecionado.
        printf("Resultado: %.2f", resultado);
        //Logo em seguida ele mostrará o resultado e terminará o programa.
    }

    
    if (escolha==2)
    {
        printf("Digite o primeiro numero da subtracao: ");
        scanf("%i",&numero1);
        printf("Digite o segundo numero da subtracao: ");
        scanf("%i",&numero2);
        //Nessa condição se o usuário escolher a opção um ele digitará o primeiro e o segundo número 



        double resultado= numero1-numero2;
        //Quando o scanf ler os número o programa fará o cálculo selecionado.
        printf("Resultado: %.2f", resultado);
         //Logo em seguida ele mostrará o resultado e terminará o programa.
    }

        if (escolha==3)
    {
        printf("Digite o primeiro numero da multiplicacao: ");
        scanf("%i",&numero1);
        printf("Digite o segundo numero da multiplicacao: ");
        scanf("%i",&numero2);
        //Nessa condição se o usuário escolher a opção um ele digitará o primeiro e o segundo número 


        double resultado= numero1*numero2;
        //Quando o scanf ler os número o programa fará o cálculo selecionado.
        printf("Resultado: %.2f", resultado);
        //Logo em seguida ele mostrará o resultado e terminará o programa.
    }

        if (escolha==4)
    {
        printf("Digite o primeiro numero da divicao: ");
        scanf("%i",&numero1);
        printf("Digite o segundo numero da divicao: ");
        scanf("%i",&numero2);
        //Nessa condição se o usuário escolher a opção um ele digitará o primeiro e o segundo número 
        double resultado= numero1/numero2;
        //Quando o scanf ler os número o programa fará o cálculo selecionado.
        printf("Resultado: %.2f", resultado);
        //Logo em seguida ele mostrará o resultado e terminará o programa.
    }
    //Nessa opção 5 se o usuário escolher ela o programa será cancelado e ele terminará
    if (escolha==5)
    {
        printf("Saindo do programa...");
        exit(0);
    };


return 0 ;
    
}
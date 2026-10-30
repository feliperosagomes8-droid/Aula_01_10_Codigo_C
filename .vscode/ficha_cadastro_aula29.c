#include <stdio.h>
#include <stdlib.h>

int main(){
   char nome [50];
   int idade;
   double salario;
   char Genero;

   printf("Digite seu nome : ");
   scanf(" %s", &nome);

   printf("Digite sua idade: ");
   scanf(" %i", &idade);

   printf("Digite seu salario: ");
   scanf(" %lf",&salario);

   printf(" %c",&Genero);

   printf("DADOS DIGITADOS\n");
   printf("Nome: %s\n", nome);
   printf("idade: %i", idade);
   printf("Salario: %.2f", salario);
   printf("Genero: %c",Genero);

   return 0;
}

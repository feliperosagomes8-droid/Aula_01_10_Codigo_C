#include<stdio.h>
#include<math.h>

int main()
{
    int x = 9;
    int y = 2;
    int z = -5;
    float raiz =sqrt(x);
    float potencia = pow(x,y);
    float absoluto = fabs(z);

    printf("Raiz quadrada: %.3f\n", raiz);
    printf("Potência: %.2f\n", potencia);
    printf("Valor Absoluto: %.1f\n",absoluto);

}
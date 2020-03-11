#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoes.h"

int main(){

    int divisor, dividendo;

    printf("Digite o Dividendo e o Divisor. \n");
    scanf("%d %d", &dividendo, &divisor);
    printf("O numero foi divisivel %d vezes. \n", divisivel(dividendo, divisor));

    /* float altura = 0, base = 0;

    printf("Digite a altura e base. \n");
    scanf("%f %f", &altura, &base);

    printf("Perimetro: %f \n", perimetro(altura, base));
    printf("Area: %f \n", area(altura, base));
    printf("Diagonal: %f", diagonal(altura, base)); */

    /* float valor, desc;

    printf("Digite o valor e o desconto. \n");
    scanf("%f %f", &valor, &desc);

    printf("O produto vai custar. %f \n", desconto(valor, desc)); */



    return 0;
}

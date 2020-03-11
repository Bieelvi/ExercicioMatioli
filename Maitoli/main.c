#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(){

    float altura = 0, base = 0;

    printf("Digite a altura e base. \n");
    scanf("%f %f", &altura, &base);

    printf("Perimetro: %f \n", perimetro(altura, base));
    printf("Area: %f \n", area(altura, base));
    printf("Diagonal: %f", diagonal(altura, base));

    return 0;
}

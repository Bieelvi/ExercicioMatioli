#include <math.h>

//TESTE
int somaInt (int a, int b){
    int c;

    c = a + b;

    return c;
}

//EXERCICIO 1
float perimetro (float a, float b){
    float c;

    c = a + a + b + b;

    return c;
}

float area(float a, float b){
    float c;

    c = a * b;

    return c;
}

float diagonal(float a, float b){
    float c;

    c = sqrt((a*a)+(b*b));

    return c;
}

//EXERICICO 2
float desconto(float a, float b){
    float c;

    c = a - ((a/100)*b);

    return c;
}

//EXERCICIO 3
int divisivel(int a, int b){
    int c = 0;

    if (a > b){
        return 0;
    }
    else {
        while ((a % b) == 0){
            a = a / b;
            c++;
        }
    }

    return c;
}

//EXERCICIO 4
void circulo(float raio, float *perimetro, float *area){
    float r;
    r = raio;
    *perimetro = 2 * 3.14 * r;
}

//EXERCICIO 6
int categoria(int idade){
    switch(idade){
    case 11 ... 13:
        printf("Juvenil A");
    break;
    case 14 ... 17:
        printf("Juvenial B");
    break;
    case 18 ... 100:
        printf("Adulto");
    break;
    default:
        printf("Idade Invalida");
    break;
    }
}

//EXERCICIO 7
int tabuada(int valor){

}





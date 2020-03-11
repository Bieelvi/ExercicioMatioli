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

    if (a < b){
        return 0;
    }
    else {
        while ((a % b) == 0){
            a /= b;
            c++;
        }
    }

    return c;
}

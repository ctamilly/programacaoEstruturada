    /*4. Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e
retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da
seguinte fórmula: V = π * raio² * altura
em que π = 3.1414592*/

#include <stdio.h>
#include <math.h>
#define pi 3.1414592

float volumeCilindro(float altura, float raio);

int main(){
    float a, r, v;

    printf("\nDigite a altura do cilindro: ");
    scanf("%f", &a);

    printf("\nDigite o raio do cilindro: ");
    scanf("%f", &r);

    v = volumeCilindro(a, r);

    printf("\n O volume do cilindro eh: %.2f", v);

}

float volumeCilindro(float altura, float raio){

    return (pi * pow(raio, 2) * altura);
}

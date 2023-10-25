/*5.Escreva uma função para o cálculo do volume de uma esfera
em que π = 3.1414592 valor do raio r deve ser passado por parâmetro. 
(V = 4 / 3π * r³) */

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

float volumeEsfera(float r);

int main(){
    float r, volume;

    printf("\nDigite o raio da esfera: ");
    scanf("%f", &r);

    volume = volumeEsfera(r);

    printf("\nO volume da esfera eh: %.2f", volume);

}

float volumeEsfera(float r){
    return 4.0 * M_PI * pow(r, 3) / 3; 
}

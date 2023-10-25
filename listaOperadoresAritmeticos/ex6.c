//6. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 

/*potencia ---> usar função ---> adicionar a biblioteca math.h
potencia = pow(2,7);
printf("\nPOtencia: %d", potencia);

modulo = numero1 % numero2;
*/

#include <stdio.h>
#include <math.h>

int main() {

    float pi, raio, area;

    printf("Digite o valor do raio do circulo:\n");
    scanf("%f", &raio); 

    pi = 3.14;
    area = pi * pow(raio, 2);

    printf("A area so circulo eh: %.2f", area);

    return 0;

}

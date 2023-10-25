/*1. Escreva um algoritmo que leia um número e imprima a raiz quadrada do número 
caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.*/

#include <stdio.h> 
#include <math.h>

int main() {

    int numero;

    printf("digite um numero: \n");
    scanf("%d", &numero);

    if (numero >= 0){
        printf("\na raiz de %d eh %.2f\n", numero, sqrt(numero));
    }else{
        printf("\no quadrado de %d eh %.2f\n", numero, pow(numero, 2));
    }
return 0;
}

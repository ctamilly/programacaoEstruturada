/*1. Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x).
f(x) = 5x + 3 / (raiz quadrada de x²) - 16.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x, xQuadrado;
    float resultado;


    printf("\nDigite o valor de x: ");
    scanf("%d", &x);

    xQuadrado =  pow(x, 2);

    resultado = (5 * x + 3) / (sqrt(xQuadrado) - 16);


    printf("\nO resultado de f(x) eh: %.2f", resultado);

    return 0;

}

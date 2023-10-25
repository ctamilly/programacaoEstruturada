/*3. Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, 
e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("\nDigite o valor de a: ");
    scanf("%d", &a);

    printf("\nDigite o valor de b: ");
    scanf("%d", &b);

    printf("\nDigite o valor de c: ");
    scanf("%d", &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("\nO 3 valores formam um triangulo.");

        if(a == b && a == c){
            printf("\n Eh um triangulo equilatero.");
        }else if(a == b || a == c || b == c){
            printf("\nEh um triangulo isosceles.");

        }else{
            printf("\nEh um triangulo escaleno.");
        }
    }else{
        printf("\nOs valores nao formam um triangulo.");
    }

    return 0;

}

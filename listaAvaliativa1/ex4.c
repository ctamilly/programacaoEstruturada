/*4. Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos 
lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, 
Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/

#include<stdio.h>

int main(){

    int a, b, c;

    int a2 = pow(a, 2), b2 = pow(b, 2), c2 = pow(c, 2);

    printf("\nDigite o valor de a: ");
    scanf("%d", &a);

    printf("\nDigite o valor de b: ");
    scanf("%d", &b);

    printf("\nDigite o valor de c: ");
    scanf("%d", &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("\nEh um triangulo.");

        if((a2 = b2 + c2) || (b2 = a2 + c2) || (c2 = a2 + b2)){
            printf("\nTriangulo retangulo");
        }else if((a2 > b2 + c2) || (b2 > a2 + c2) || (c2 > a2 + b2)){
            printf("\nTriangulo obtusangulo");
        }else{
            printf("\nTriangulo acutângulo");
        }
    }else{
        printf("\nNao eh um triangulo.");
    }

    return 0;

}

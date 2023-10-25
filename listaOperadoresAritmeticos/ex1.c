/*1. Escreva um programa que receba dois números
 e mostre a soma, a subtração, a multiplicação e 
 a divisão desses números.*/

#include <stdio.h>

int main() {

    int A, B, soma, subtr, mult;

    float div; //se colocar como inteiro ele ignora o que vem depois da virgula, não arredonda

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);

    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    div = (float)A / (float)B; //cast de tipo ---> alterar o tipo da variavel durante a execução

    printf("***RESULTADOS***\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtr);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %.2f\n", div);

    return 0;

}

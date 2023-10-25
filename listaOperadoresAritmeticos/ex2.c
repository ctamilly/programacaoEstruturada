/*2. Escreva um programa que receba um número qualquer e mostre o seu dobro.*/

#include <stdio.h>

int main() {

    int num, numDobro;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    numDobro = num * 2;
  
    printf("O dobro do numero digitado eh: %d", numDobro);

    return 0;

}

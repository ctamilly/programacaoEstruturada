/*6. Codifique um programa que lê um número inteiro. A seguir o programa deve imprimir uma mensagem para o usuário dizendo 
e o número digitado é par. Se o número não for par, o programa não deve fazer nada.*/

#include <stdio.h> 

int main() {

    int numero;

    printf("digite um numero: \n");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("o numero digitado eh par");
    }

    return 0;
}

/*5. Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, 
se está no intervalo entre 500 e 1000, ou se ele está fora dos escopos anteriores. */

#include <stdio.h>

int main(){
    int num;

    printf("digite um numero:\n");
    scanf("%d", &num);

    if(num == 5) {
        printf("o numero eh igual a 5");
    } else if(num == 200) {
        printf("o numero eh igual a 200");
    } else if(num == 400){
        printf("o numero eh igual a 400");
    } else if(num >= 500 && num <= 1000){
        printf("o numero esta no intervalo entre 500 e 1000");
    } else {
        printf("o numero nao eh igual a 5, 200 ou a 500 e não esta no intervalo entre 500 e 1000");
    }

    return 0;
}

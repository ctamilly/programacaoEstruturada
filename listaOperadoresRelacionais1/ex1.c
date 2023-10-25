//1. Leia a idade e imprima se a pessoa é maior;

#include <stdio.h>

int main() {

    int idade;

    printf("digite a sua idade \n");
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("voce eh maior");
    }else {
        printf("voce eh menor");
        
    }

}

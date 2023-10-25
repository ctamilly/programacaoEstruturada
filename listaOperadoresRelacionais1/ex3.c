//3. Leia a altura e imprima se é maior que 1.8m;

#include <stdio.h>

int main(){

    float altura, alturaRef = 1.80;

    printf("digite a sua altura\n");
    scanf("%f", &altura);

    if(altura >= alturaRef) {
        printf("voce eh uma pessoa alta\n");
    }else{
        printf("voce eh uma pessoa baixa\n");
    }
}

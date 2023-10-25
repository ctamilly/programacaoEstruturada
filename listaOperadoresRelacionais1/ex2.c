//2. Leia o salário e imprima se ganha mais que o mínimo;

#include <stdio.h>

int main() {

    float salario, salarioMin = 1320;

    printf("digite o seu salario:\n");
    scanf("%f", &salario);

    if(salario == salarioMin){
        printf("vc ganha o salario minimo");
    }else{
        printf("voce ganha mais ou menos que o salario minimo");
    }

}

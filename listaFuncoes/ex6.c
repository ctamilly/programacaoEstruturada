/*6.Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule
e retorne o IMC (Índice de Massa Corporal) dessa pessoa.
IMC = peso / (altura * altura)*/

#include <stdio.h>

float calculaImc(float peso, float altura);
void situacao(float IMC);

int main(){
    float peso, altura, IMC;

    printf("\nDigite o peso: ");
    scanf("%f", &peso);

    printf("\nDigite a altura: ");
    scanf("%f", &altura);

    IMC = calculaImc(peso, altura);
    situacao(IMC);

    printf("O IMC calculado eh: %.2f", IMC);
}

float calculaImc(float peso, float altura){
    return peso / (altura * altura);
}

void situacao(float IMC){

    if(IMC < 16){
        printf("\nAbaixo do peso");
    }else if( IMC >= 16 && IMC < 25){
        printf("\nPeso normal");
    }else{
        printf("\nAcima do peso");
    }

}

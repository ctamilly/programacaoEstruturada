#include <stdio.h>

int main(){
    int vetor[10], maior, menor, pMaior, pMenor;

    for(int i = 0; i < 10; i++){
        printf("\nDigite 10 numeros para o vetor: ");
        scanf("%d", &vetor[i]);
        
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 1; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            pMaior = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            pMenor = i;
        }
    }


    printf("\nO maior elemento do vetor eh: %d", maior);
    printf("\nO menor elemento do vetor eh: %d", menor);

    return 0;

}

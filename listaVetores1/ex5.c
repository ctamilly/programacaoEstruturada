#include <stdio.h>

int main(){
    int vetor[10], contPar = 0;

    for(int i = 0; i< 10; i++){
        printf("\nDigite 10 numeros para o vetor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){  
            contPar++;        
        }
    }

    printf("\nA quantidade de numeros pares eh: %d", contPar);   

    return 0;
}

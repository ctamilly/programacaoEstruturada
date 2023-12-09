/*2. Crie um programa ,que leia 6 valores inleiros e em seguida mostre na tela os valores lidos.*/


#include <stdio.h>

int main(){
    int A[6] = {0, 1, 2, 3, 4, 5};


    printf("\nconteudo do vetor: ");
    for(int i = 0; i < 6; i++){
        printf("\n%d", A[i]);
    }

    return 0;
}

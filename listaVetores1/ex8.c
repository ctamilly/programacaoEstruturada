#include <stdio.h>
#define TAM 6

int main(){
    int valores[TAM];

    for(int i =0; i < TAM; i++){
        printf("Digite os valores:");
        scanf("%d", &valores[i]);
    }

    for(int i = TAM - 1; i >= 0; i--){
        printf("\n%d", valores[i]);
    }


}

/*Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem 10 elementos cada. lmprimir todos os conjuntos.*/

#include <stdio.h>
#include <math.h>

int main(){

    int vetorA[10], vetorB[10];

    for(int i = 0; i < 10; i++){
        printf("\nDigite os valores do conjunto A: ");
        scanf("%d", &vetorA[i]);
    }

    for(int i = 0; i < 10; i++){
        /* vetorB[i] = pow(vetorA[i], 2); */
        vetorB[i] = vetorA[i] * vetorA[i];
    }

    printf("\nCOnjunto A e B sao: ");
    for(int i = 0; i < 10; i++){
        printf("\n %d %d", vetorA[i], vetorB[i]);
    }

    return 0;


}

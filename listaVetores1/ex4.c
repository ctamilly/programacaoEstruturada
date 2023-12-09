/*4.Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.*/

#include <stdio.h>

int main() {
  int vetor[8], x, y;

  printf("\nDigite 8 valores para o vetor: ");
  for (int i = 0; i < 8; i++) {
    scanf("%d", &vetor[i]);
  }

  do{
    printf("\nDigite os valores de x(0-7): ");
    scanf("%d", &x);

    printf("\nDigite os valores de y(0-7): ");
    scanf("%d", &y);

    if((x >= 0 && x < 8) && (y >= 0 && y < 8)){
        for(int i = 0; i < 8; i++){
            if(i == x || i == y){
                int soma += vetor[i];
            }
        }
    }else{
        printf("\nIndices errados.");
    }

  }while(x < 0 || x > 7 && y < 0 || y > 7);

 /*  if (x >= 0 && x < 8 && y >= 0 && y < 8) {
    int soma = vetor[x] + vetor[y];

    printf("\nA soma dos valores encontrados nas posicoes %d e %d sao: %d", x, y, soma);
  } else {
    printf("\n Os valores informados não estão dentro do intervalo de 0 a 7."); */

    return 0;
  }

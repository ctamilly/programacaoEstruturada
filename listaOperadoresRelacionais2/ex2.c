/*2. Construa um algoritmo que dado quatro valores, A, B, C e D, 
o algoritmo imprima o maior e o menor valor. */

#include <stdio.h> 

int main() {

    int A = 10, B = 20, C = 30, D = 40, maior, menor;

    if(A > B && A > C && A > D){
        maior = A;
    } else if(B > A && B > C && B > D){
        maior = B;
    }else if(C > A && C > B && C > D){
        maior = C;
    }else{
        maior = D;
    }


    if(A < B && A < C && A < D){
        menor = A;
    }else if(B < A && B < C && B < D){
        menor = B;
    }else if(C < A && C < B && C < D){
        menor = C;
    }else{
        menor = D;
    }

    printf("o maior numero eh %d\n", maior);
    printf("o menor numero eh %d\n", menor);

  return 0;
}

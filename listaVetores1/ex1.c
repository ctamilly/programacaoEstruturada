/*1.	Faça um programa que possua um velor denominado A que armazene 6 numeros intei­
ros. O programa deve executar os seguintes passos:
(a)	Atribua os seguintes valores a esse vetor: 1, 0, 5,-2, -5, 7.
(b)	Armazene em uma variavel inteira (simples) a soma entre os valores das posiçõess A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c)	Modifique·o, vetor na posição 4, atribuinao a esta posição o valor 100.
(d)	Mostre na tela cada valor do velor A, um em cada linha.
*/

#include <stdio.h>

int main(){
    int A[6] = {1, 0, 5, -2, -5, 7};

    int soma = 0;

    for(int i = 0; i < 6; i++){
        if(i == 0 || i == 1 || i == 5){
            soma += A[i]; 
            printf("\n\nA soma de A[0], A[1] e A[5] eh: %d", soma); 
        }  
        
        if(i == 4){
            A[i] = 100;
        }
    }

    for(int i = 0; i < 6; i++){
        printf("\n\n%d", A[i]);
    }

    return 0;

}

/*2. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.*/

#include <stdio.h>
#include<math.h>

int main(){
    float alturaChico = 1.5, alturaZe = 1.1, crescimentoChico = 0.02, crescimentoZe = 0.03;
    int anos=0;

    while (alturaChico >= alturaZe){
        
        alturaChico += crescimentoChico;

        alturaZe += crescimentoZe;

        anos++;
    }

    printf("\nSerao necessarios %d anos para que Ze seja maior que Chico.", anos);

    return 0;    

}

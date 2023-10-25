/*4. Dados três valores A, B e C, construa um algoritmo, que imprima 
os valores de forma descendente (do maior para o menor).*/

#include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("digite 3 numeros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if(num1 > num2 && num2 > num3) {
        printf("numeros em ordem decrescente: %d, %d, %d", num1, num2, num3);
    } else if (num1 > num3 && num3 > num2) {
        printf("numeros em ordem decrescente: %d, %d, %d", num1, num3, num2);
    }else if(num2 > num1 && num1 > num3){
        printf("numeros em ordem decrescente: %d, %d, %d", num2, num1, num3);
    }else if(num2 > num3 && num3 > num1){
        printf("numeros em ordem decrescente: %d, %d, %d", num2, num3, num1);
    }else if(num3 > num1 && num1 > num2){
        printf("numeros em ordem decrescente: %d, %d, %d", num3, num1, num2);
    }else {
        printf("numeros em ordem decrescente: %d, %d, %d", num3, num2, num1);
    }

    return 0;
}

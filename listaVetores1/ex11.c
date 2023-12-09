#include<stdio.h>

int main(){
    int numeros[10], negativos = 0, positivos = 0;

    for(int i = 0; i < 10; i ++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);


        if(numeros[i] <0){
            negativos++;
        }else{
            soma += numeros[i];
        }
    }

    printf("\nA quantidade de numero negativos é: %d",negativo);
    printf("\nA soma dos positivos é: %d",positivo);

}

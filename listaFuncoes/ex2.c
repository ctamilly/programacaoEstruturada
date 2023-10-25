/*2. Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo:
Entrada = 4. Saída = abril.*/

#include <stdio.h>

void mes(int num);

int main(){

    int x;

    printf("\nDigite um numero de 1 a 12: ");
    scanf("%d", &x);

    if(x >= 1 && x <= 12){
        mes(x);
    }else{
        printf("Numero invalido");
    }

    return 0;

}

void mes(int num){
    switch(num){
        case 1: printf("\njaneiro - 31 dias");
        break;

        case 2: printf("\nfevereiro - 29 dias");
        break;

        case 3: printf("\nmarco - 31 dias");
        break;

        case 4: printf("\nabril - 30 dias");
        break;

        case 5: printf("\nmaio - 31 dias");
        break;

        case 6: printf("junho - 30 dias");
        break;

        case 7: printf("\njulho - 31 dias");
        break;

        case 8: printf("\nagosto - 31 dias");
        break;

        case 9: printf("\nsetembro - 30 dias");
        break;

        case 10: printf("\noutubro - 31 dias");
        break;

        case 11: printf("novembro - 30 dias");
        break;

        case 12: printf("\ndezembro - 31 dias");
        break; 

        default: 
        printf("\nNumero fora do intervalo valido.");

    }
}

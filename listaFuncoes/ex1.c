/*1. Escreva uma função que receba por parâmetro dois números e retorne o maior deles.*/

#include <stdio.h>

int maior(int num1, int num2);

int main(){

    int x, y, m;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &x);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &y);

    m = maior(x,y);
    printf("\nO maior numero eh: %d", m);

}

int maior(int num1, int num2){
    if(num1 > num2)
      return num1;
    else
      return num2;
}

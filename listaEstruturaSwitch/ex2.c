/*2.O cardápio de uma lanchonete é o seguinte: 

ESPECIFICAÇÃO                       PREÇO UNITÁTIO 
100 - Cachorro quente               R$ 10,10
101 - Bauru Simples                 R$ 8,30
102 - Bauru com ovo                 R$ 8,50
103 - Hamburger                     R$ 12,50
104 - Cheeseburger                  R$ 13,25

Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.*/

#include <stdio.h>

int main(){

    int cardapio;
    int qnt;
    float total;

    printf("------Cardapio------\n");
    printf("100 - Cachorro quente\n");
    printf("101 - Bauru simples\n");
    printf("102 - Bauru com ovo\n");
    printf("103 - Hamburger\n");
    printf("104 - Cheeseburger\n");

    printf("\nDigite o codigo do produto: ");
    scanf("%d", &cardapio);
    printf("\nDigite a quantidade: ");
    scanf("%d", &qnt);

    switch(cardapio){

        case 100:
        total = 10.10 * qnt;
        printf("\no total do seu pedido eh: %.2f", total);
        break;

        case 101:
        total = 8.30 * qnt;
        printf("\no total do seu pedido eh: %.2f", total);
        break;

        case 102:
        total = 8.50 * qnt;
        printf("\no total do seu pedido eh: %.2f", total);
        break;

        case 103:
        total = 12.50 * qnt;
        printf("\no total do seu pedido eh: %.2f", total);
        break;

        case 104:
        total = 13.25 * qnt;
        printf("\no total do seu pedido eh: %.2f", total);
        break;

        default:
        printf("opcao nao cadastrada");

    } 

    return 0;
}

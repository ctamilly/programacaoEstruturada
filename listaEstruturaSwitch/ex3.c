/*3. Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir). 

PRATO             CALORIAS        SOBREMESA              CALORIAS         BEBIDA                CALORIAS
Vegetariano       180 cal         Abacaxi                75 cal           Chá                   20 cal
Peixe             230 cal         Soverte Diet           110 cal          Suco de laranja       70 cal
Frango            250 cal         Mousse Diet            170 cal          Suco de melão         100 cal
Carne             350 cal         Mousse de chololate    200 cal          Refrigerante diet     65 cal

Enumere cada opção de prato, sobremesa e bebida.

Prato: 1 - vegetariano, 2 – Peixe, 3 – Frango, 4 – Carne;

Sobremesa: 1 – Abacaxi, 2 – Sorvete diet, 3 – Mouse diet, 4 – Mouse chocolate;

Bebida: 1 – Chá, 2 - Suco de laranja, 3 – Suco de melão, 4 – Refrigerante diet. */

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

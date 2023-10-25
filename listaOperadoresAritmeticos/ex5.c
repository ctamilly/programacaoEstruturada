/*5. Faça um programa em que o usuário digite o custo de uma 
determinada mercadoria, em seguida, adiciona-se ao custo o valor 
do frete e despesas eventuais (também solicitadas pelo teclado). 
Para concluir, o programa pergunta qual o valor de venda e indica a 
percentagem de lucro da mercadoria.*/

#include <stdio.h>

int main() {
    float vendaMercadoria, custoMercadoria, custoFrete, custoDespesas, totalDespesas, totalLucro, percentualLucro;

    printf("\nDigite o custo da mercadoria: ");
    scanf("%f", &custoMercadoria);

    printf("\nDigite o custo do frete: ");
    scanf("%f", &custoFrete);

    printf("\nDigite o custo das despesas: ");
    scanf("%f", &custoDespesas);

    totalDespesas = custoMercadoria + custoFrete + custoDespesas;

    printf("\nDigite o valor de venda da mercadoria: ");
    scanf("%f", &vendaMercadoria);

    totalLucro = vendaMercadoria - totalDespesas;
    percentualLucro = (totalLucro / vendaMercadoria) * 100;

    printf("\nA porcentagem de lucro da mercadoria eh: %.2f%%", percentualLucro);

    return 0;

}

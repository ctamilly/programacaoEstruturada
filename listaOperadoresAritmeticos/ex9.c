/*9. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever 
um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final 
ao consumidor*/

#include <stdio.h>

int main() {
    float custoFabrica, percentualDistribuidor, percentualImposto, custoConsumidor;

    printf("Digite o custo de fábrica do carro: \n");
    scanf("%f", &custoFabrica);

    percentualDistribuidor = 0.28;
    percentualImposto = 0.45;

    custoConsumidor = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * percentualImposto);

    printf("O custo final do carro para o consumidor eh: %.2f", custoConsumidor);

    return 0;

}

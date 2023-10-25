/*10. Uma revendedora de carros usados paga a seus funcionários vendedores um 
salário fixo por mês, mais uma comissão também fixa para cada carro vendido e 
mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o 
número de carros por ele vendidos, o valor total de suas vendas, o salário fixo 
e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.*/

#include <stdio.h>

int main() {

    int qntCarros;
    float salarioFixo, comissaoFixa, percentualSobreVenda, totalVendas, salarioFinal;

    percentualSobreVenda = 0.05;

    printf("Digite quantos carros foram vendidos: \n");
    scanf("%d", &qntCarros);

    printf("Digite o valor total das vendas: \n");
    scanf("%f", &totalVendas);

    printf("Digite o valor da sua comissao por carro vendido: \n");
    scanf("%f", &comissaoFixa);

    printf("Digite o valor do seu salario fixo: \n");
    scanf("%f", &salarioFixo);

    salarioFinal = salarioFixo + (qntCarros * comissaoFixa) + (percentualSobreVenda * totalVendas);

    printf("O valor do seu salario final eh: %.2f", salarioFinal);

    return 0;

}

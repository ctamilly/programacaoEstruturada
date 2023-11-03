/*Fazer um programa que solicita o total gasto pelo cliente de uma loja,
imprime as opções de pagamento, solicita a opção desejada e imprime o
valor total das prestações (se houverem).

1) Opção: a vista com 10% de desconto

2) Opção: em duas vezes (preço da etiqueta)

3) Opção: de 3 até 10 vezes com 3% de juros ao mês sobre 
o valor de cada prestação (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções, solicita a opção desejada
e retorna a opção escolhida. No programa principal, testar a opção escolhida
e ativar a função correspondente (uma função para cada opção).*/

#include <stdio.h>

void mostraMenu();

float calculaOpcao01(float totalGasto);

float calculaOpcao02(float totalGasto);

float calculaOpcao03(float totalGasto, int numParcelas);

int main(){
    float totalGasto;
    int opcao, numParcelas = 0;

    printf("----> PAGAMENTO <----");
    printf("\n\n---> Digite o total gasto na compra: ");
    scanf("%f", &totalGasto);
    mostraMenu();
    printf("\n\n---> Escolha a opcao de pagamento: ");
    scanf("%d", &opcao);
    printf("\n\n Valor final da compra: ");

    switch(opcao){
        case 1: 
            printf("R$ %.2f", calculaOpcao01(totalGasto));
            break;
        case 2: 
            printf("R$ %.2f", calculaOpcao02(totalGasto));
            break;
        case 3: 
            if(totalGasto > 100){
                printf("\nDigite a quantidade de parcelas: ");
                scanf("%d", &numParcelas);
                if(numParcelas >= 3 && numParcelas <= 10){
                    printf("R$ %.2f", calculaOpcao03(totalGasto, numParcelas));
                }                
            }else{
                printf("Esta opcao eh valida apenas para compras acima de R$ 100.");
            }
            break;

        default:
            printf("Digite um numero valido (1-3)");
    }
}


void mostraMenu(){
    printf("\n---> Opcoes de pagamento:\n");
    printf("\n\n - Opcao 01: a vista com 10%% de desconto");
    printf("\n\n - Opcao 02: em 2X (preco de etiqueta)");
    printf("\n\n - Opcao 03: de 3x ate 10x com 3%% e juros ao mes");
}

float calculaOpcao01(float totalGasto){
    float desconto = (totalGasto * 0.1);
    float valorFinal = (totalGasto - desconto);
    return valorFinal;
}

float calculaOpcao02(float totalGasto){
    float valorFinal = totalGasto;
    return valorFinal;
}

float calculaOpcao03(float totalGasto, int numParcelas){    
        float juros = totalGasto * 0.03;
        float valorAoMes = totalGasto / numParcelas;
        float valorFinal = ((valorAoMes + juros) * numParcelas);
        return valorFinal;       
}

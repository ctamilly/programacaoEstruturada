/*1.	Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base, cada operário recebe um adicional de produtividade baseado na quantidade de peças fabricadas por mês. Este adicional é pago de acordo com o seguinte critério:
•	Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;
•	Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50;
•	Se o número de peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50 até 80 e de R$ 0,75 por peça fabricada acima das 80.
Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele mês e apresentar o seu salário. Isto deve se repetir para todos os funcionários da empresa, onde o usuário não sabe, inicialmente, quantos funcionários existem nesta empresa, ou seja, o número de funcionários não será fornecido. 
Sua solução proposta deverá possuir as lógicas bem definidas que sejam necessárias a implementação separada em sub-algoritmos específicos, devendo pelo menos os seguintes sub-algoritmos:
a)	validaQuantidade que validará o número de peças fabricadas por cada funcionário;
b)	calculaSalario que efetuará o cálculo do salário total para cada funcionário.
O resultado final será mostrado ao usuário por meio de um procedimento (mostraFinal).
*/

#include <stdio.h>

int validaQuantidade(int qnt){
    if(qnt >= 0){
        return qnt;
    }else{
        printf("Quantidade de pecas invalida! Digite um valor maior que zero.\n");
        return -1;
    }
}    

float calculaSalario(int qnt){
    float salario;
    float salarioBase = 600;
    float adicional = 0;

    if(qnt > 50 && qnt == 80){
        adicional = .5 * (qnt - 50);    
    }else if(qnt > 80){
        adicional = .5 * (80 - 50) + .75 * (qnt - 80);
    }

    salario = salarioBase + adicional;

    return salario;
}

void mostraFinal(float salario){
    printf("\n --> O salario do funcionario eh: R$ %.2f\n", salario);

}
    
int main(){
    int qnt;

    printf("\n\n--> Digite a quantidade de pecas fabricadas por cada funcionario ou -1 para sair: ");
    scanf("%d", &qnt);

    if(qnt != -1){
        qnt = validaQuantidade(qnt);
        float salario = calculaSalario(qnt);
        mostraFinal(salario);
    }else{
        printf("\n --> Obrigado por usar o nosso programa!\n");
    }

    return 0;  

}

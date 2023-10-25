/*9. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela 
que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários 
com menor salario terão um aumento proporcionalmente maior do que os funcionários  com 
um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber 
um bônus adicional de salário. Faça um programa que leia:

• o valor do salario atual do funcionário; 

• o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

Use as tabelas abaixo para calcular o salario reajustado deste funcionário e 
imprima o valor do salario final reajustado, ou uma mensagem caso o funcionário não 
tenha direito a nenhum aumento.*/

#include <stdio.h>

int main(){

    float salarioAtual, reajuste, bonus, tempoEmpresa, salarioReajustado;

    printf("salario atual:\n");
    scanf("%f", &salarioAtual);    

    printf("tempo de empresa:\n");
    scanf("%f", &salarioAtual);  

    if(salarioAtual <= 500){

        reajuste = 0.25;

    } else if (salarioAtual > 500 && salarioAtual <= 1000) {

        reajuste = 0.2;

    } else if (salarioAtual > 1000 && salarioAtual <= 1500){
        reajuste = 0.15;

    } else if (salarioAtual > 1500 && salarioAtual <= 2000){
        reajuste = 0.1;

    } else {

        printf("nao ha reajuste, pois o salario eh maior que 2k.\n");
    }

    salarioReajustado = (salarioAtual + salarioAtual * reajuste);

    if(tempoEmpresa > 10){
        bonus = 500;
        
    }else if(tempoEmpresa >= 7 && tempoEmpresa <= 10){
        bonus = 300;

    }else if(tempoEmpresa >= 4 && tempoEmpresa <= 6){
        bonus = 200;

    }else if(tempoEmpresa >= 1 && tempoEmpresa <= 3){
        bonus = 200;

    }else{
        printf("nao ha bonus, pois o tempo de empresa eh menor que 1 ano.\n");
    }

    salarioReajustado += bonus;
    
    printf("o valor do salario reajustado eh: %.2f", salarioReajustado);
    
return 0;

}

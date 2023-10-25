/*8. Escreva um algoritmo para ler o salário mensal atual de um funcionário
 e o percentual de reajuste. Calcular e escrever o valor do novo salário.*/

 #include <stdio.h> 

 int main() {
    float salarioAtual, percentualReajuste, novoSalario;

    printf("Digite o seu salario mensal atual: \n");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: \n");
    scanf("%f", &percentualReajuste);

    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);

    printf("O valor do seu novo salario eh: %.2f", novoSalario);

    return 0;

 }

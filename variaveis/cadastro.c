/*Criar um algoritmos que apresente um cadastro de informações. O cadastro deverá conter os seguintes campos:

a. Nome 

b. Idade

c. Matricula

e. Endereço

f. Curso

g. Período

h. Disciplinas

g. Valor da mensalidade

Apresentar as informações do cadastro.

A apresentação deverá estar formatada adequadamente.*/


#include <stdio.h>

int main() {
    
    char nome[50];
    int idade;
    char matricula[20];
    char endereco[50];
    char curso[20];
    char periodo[20];
    char disciplinas[50];
    float valorDaMensalidade;


    printf("Digite seu nome:\n");
    fgets(nome, 20, stdin);

    printf("\nDigite sua idade:\n");
    scanf("%d", &idade);
    fflush(stdin);   

    printf("\nDigite seu endereco:\n");
    fgets(endereco, 50, stdin);

    printf("\nDigite sua matricula:\n");
    fgets(matricula, 20, stdin);

    printf("\nDigite seu curso:\n");
    fgets(curso, 20, stdin);
    
    
    printf("\nDigite seu periodo:\n");
    fgets(periodo, 20, stdin);
    fflush(stdin);

    printf("\nDigite suas disciplinas:\n");
    fgets(disciplinas, 20, stdin);

    printf("\nDigite o valor da sua mensalidade:\n");
    scanf("%f", &valorDaMensalidade);
    


    printf("\nnome: %s\n", nome);
    printf("idade: %d\n", idade);
    printf("\nendereco: %s\n", endereco);
    printf("matricula: %s\n", matricula);
    printf("curso: %s\n", curso);
    printf("periodo: %s\n", periodo);
    printf("disciplinas: %s\n", disciplinas);
    printf("mensalidade: %.2f\n", valorDaMensalidade);
    
    return 0;

}

/*(1,0 pontos)
2.	Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. Assim, elabore um algoritmo que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, a classificação por extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou Feminino).
A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo classificaSalario e os resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado mostraClassifica. 
Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de fazer sempre a validação de todos os dados informados em sub-algoritmos específicos.   
Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.
Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo*/

#include <stdio.h>

char validaSexo() {
    char sexo;
        printf("\nDigite o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'F') {
            return sexo;
        } else {
            printf("\nSexo invalido. Digite M para Masculino ou F para Feminino.\n");
        }
}


float validaSalario() {
    float salario;
        printf("\nDigite o salario (R$): ");
        scanf("%f", &salario);

        if (salario > 1.0) {
            return salario;
        } else {
            printf("\nSalario invalido. Digite um valor maior que R$1,00.\n");
        }
}

void classificaSalario(float salario, int *abaixo, int *acima) {
    const float salarioMinimo = 1400.0;

    if (salario < salarioMinimo) {
        (*abaixo)++;
    } else if (salario > salarioMinimo) {
        (*acima)++;
    }
}

void mostraClassificacao(float salario, char sexo) {
    const float salarioMinimo = 1400.0;

    printf("\n------------------------\n");

    printf("\nSalario: R$ %.2f\n", salario);
    printf("\nSexo: %s\n", (sexo == 'M') ? "Masculino" : "Feminino");

    if (salario < salarioMinimo) {
        printf("\nClassificacao: Abaixo do salario minimo\n");
    } else if (salario > salarioMinimo) {
        printf("\nClassificacao: Acima do salario minimo\n");
    } else {
        printf("Classificacao: Igual ao salario minimo\n");
    }

    printf("\n------------------------\n");
}

int main() {
    int abaixo = 0;
    int acima = 0;

        char sexo;
        float salario;

        printf("\n------------- CADASTRO DO TRABALHADOR -------------\n");

        sexo = validaSexo();
        salario = validaSalario();

        classificaSalario(salario, &abaixo, &acima);
        mostraClassificacao(salario, sexo);

        printf("Deseja cadastrar outro assalariado? (S/N): ");
        char resposta;
        scanf(" %c", &resposta);

        if (resposta != 'S' && resposta != 's') {
            printf("\n---------------- RESUMO ----------------\n");
            printf("\nTrabalhadores abaixo do salario minimo: %d\n", abaixo);
            printf("\nTrabalhadores acima do salario minimo: %d\n", acima);
            printf("\n------------- FIM DO PROGRAMA -------------\n");        
        }

    return 0;
}

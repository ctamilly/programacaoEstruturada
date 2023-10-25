/*8. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

a) média do salário da população;

b) média do número de filhos;

c) maior salário;

d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .*/

#include <stdio.h>
#include <math.h>

int main(){
    int numFilhos, totalFilhos = 0, salariosAte100 = 0, totalPessoas = 0;
    float salario, totalSalario = 0, maiorSalario = 0, mediaSalario, mediaFilhos, percentualAte100;

    do{
        printf("\nDigite o salario ou -1 para encerrar: ");
        scanf("%f", &salario);

        if(salario < 0){
            break;
        }

        printf("\nInforme o numero de filhos: ");
        scanf("%d", &numFilhos);

        totalSalario += salario;

        totalFilhos += numFilhos;

        if(salario > maiorSalario){
            maiorSalario = salario;
        }

        if(salario <= 100){
            salariosAte100++;
        }

        totalPessoas++;

    }while(salario >= 0);

        if(totalPessoas > 0){
            mediaSalario = (float)(totalSalario / totalPessoas);
            mediaFilhos = (float)(totalFilhos / totalPessoas);
            percentualAte100 = (float)(salariosAte100 / totalPessoas) * 100; 

        

        printf("\n-----> Resultados da Pesquisa: ");
        printf("\n a) Media do salario da populacao: %.2f", mediaSalario);
        printf("\n b) Media do numero de filhos: %.2f", mediaFilhos);
        printf("\n c) Maior Salario da Populacao: %.2f", maiorSalario);
        printf("\n d) Percentual de pessoas com salario ate R$ 100: %.2f%%", percentualAte100);

        }else{
            printf("Nenhum dado inserido.");
        }

        return 0;

    }

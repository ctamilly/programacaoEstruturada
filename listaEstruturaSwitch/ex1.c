/*Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 

61 - Brasília 

71 - Salvador 

11 - São Paulo 

21 - Rio de Janeiro 

32 - Juiz de Fora 

19 - Campinas 

27 - Vitória 

31 - Belo Horizonte 

Qualquer outro - uma cidade no Brasil sem identificação */

#include <stdio.h>

int main() {

    int ddd;

    printf("Digite o ddd para identificar a cidade: \n");
    scanf("%d", &ddd);

    switch(ddd) {
        case 61:
        printf("Brasilia\n");
        break;

        case 71:
        printf("Salvador\n");
        break;

        case 11:
        printf("Sao Paulo\n");
        break;

        case 21:
        printf("Rio de Janeiro\n");
        break;

        case 32: 
        printf("Juiz de fora\n");
        break;

        case 19: 
        printf("Campinas");
        break;

        case 27:
        printf("Vitoria");
        break;

        case 31:
        printf("Belo Horizonte");
        break;

        default:
        printf("opcao invalida");
    }

    return 0;

}

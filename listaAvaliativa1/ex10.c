/*10. Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:  

- código da cidade

- estado (RS, SC, PR, SP, RJ, ...)

- número de veículos de passeio (em 1992)

- número de acidentes de trânsito com vítimas (em 1992)

Deseja-se saber:

a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem

b) qual a média de veículos nas cidades brasileiras

c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.*/

#include <stdio.h>

int main(){

    int numCidades, codCidade, numVeiculos, numAcidentes, totalVeiculos = 0, indiceMax = -1, indiceMin = -1, numCidadesRS = 0, totalAcidentesRS = 0;

    char maiorCidade[3], menorCidade[3], estado[3];

    float mediaAcidentesRS, mediaVeiculos;

    printf("\nInforme o numero de cidades: ");
    scanf("%d", &numCidades);

    printf("\n---> Informe os dados das cidades ou -1 para finalizar: \n");

    for(int i = 0; i < numCidades; i++) {

        printf("\nCodigo da cidade: ");
        scanf("%d", &codCidade);

        if(codCidade == -1){
            break;
        }

        printf("\nEstado: ");
        scanf("%s", estado);

        printf("\nNumero de veiculos: ");
        scanf("%d", &numVeiculos);

        printf("\nNumero de acidentes de transito com vitimas: ");
        scanf("%d", &numAcidentes);

        totalVeiculos += numVeiculos;

        if(estado[0] == 'R' && estado[1] == 'S' && estado[2] == '\0'){
            totalAcidentesRS += numAcidentes;
            numCidadesRS++;
        }

        if(indiceMax == -1 || numAcidentes > indiceMax){
            indiceMax = numAcidentes;
            for(int j = 0; estado[j] != '\0'; j++){
                maiorCidade[j] = estado[j];
            }
            maiorCidade[2] = '\0';
        }

        if(indiceMin == -1 || numAcidentes < indiceMin){
            indiceMin = numAcidentes; 
            for(int j = 0; estado[j] != '\0'; j++){
                menorCidade[j] = estado[j];
            }
            menorCidade[2] = '\0';
        }
    }

    if(numCidadesRS > 0){
        mediaAcidentesRS = (float)totalAcidentesRS / numCidadesRS;
        printf("\n-> Media de acidentes com vitimas nas cidade no RS: %.2f", mediaAcidentesRS);
    }else{
        printf("\nNenhuma cidade do RS foi registrada.");
    }

    if(indiceMax != -1){
        printf("\n-> Indice maximo de acidentes de transito: %d, Cidade: %s", indiceMax, maiorCidade);
        printf("\n-> Indice minimo de acidentes de transito: %d, Cidade: %s", indiceMin, menorCidade);
    }else{
        printf("\nNao ha dados sufucientes para encontrar o maior e o menor indice de acidentes de transito.");
    }

    if(numCidades > 0){
        mediaVeiculos = (float)totalVeiculos / numCidades;
        printf("\n-> Media de veiculos nas cidades brasileiras: %.2f", mediaVeiculos);
    }else{
        printf("\nNenhuma cidade foi registrada.");
    }

    return 0;

    }

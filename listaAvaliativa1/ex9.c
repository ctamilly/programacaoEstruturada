/*9. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

- 1,2,3,4 = voto para os respectivos candidatos;

- 5 = voto nulo;

- 6 = voto em branco;

Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

- total de votos para cada candidato;

- total de votos nulos;

- total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.*/


#include <stdio.h>

int main(){

    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, voto, votosNulos = 0, votosBrancos = 0;

    printf("\n Digite o numero do candidato, 6 para voto em branco ou 0 para encerrar: ");

    while(voto != 0){
        scanf("%d", &voto);

        if( voto == 0){
            break;
        }

        switch (voto){
            case 1: 
            candidato1++;
            break;

            case 2:
            candidato2++;
            break;

            case 3:
            candidato3++;
            break;

            case 4:
            candidato4++;
            break;
           
            case 5:
            votosNulos++;
            break;

            case 6:
            votosBrancos++;
            break;

            default:
                printf("\nVoto descartado - codigo invalido.");

        }

        printf("\n Digite o numero do candidato, 6 para voto em branco ou 0 para encerrar: ");      

        }
        
        printf("\n----> Resultado:");
        printf("\n- Candidato 1: %d votos", candidato1);
        printf("\n- Candidato 2: %d votos", candidato2);
        printf("\n- Candidato 3: %d votos", candidato3);
        printf("\n- Candidato 4: %d votos", candidato4);
        printf("\n- Votos nulos: %d", votosNulos);
        printf("\n- Votos em branco: %d", votosBrancos);
    
    return 0;
}

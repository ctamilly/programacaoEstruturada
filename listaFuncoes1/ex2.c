/*2. Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de filmes retirados por seus clientes durante o ano de 2020. Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna um vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito. */

#include <stdio.h>
#include <stdlib.h>

void locacoesGratuitas(int locacoes[500], int gratuitas[500]){
    for(int i  = 0; i < 500; i++){
        gratuitas[i] = locacoes[i] / 15;
    }
}

int main(){
    int locacoes[500], gratuitas[500];

    //preencher de forma aleatoria
    for(int i = 0; i < 500; i++){
        locacoes[i] = rand() % 100 + 1;
    }

    for(int i = 0; i < 500; i++){
        printf("\n%d", locacoes[i]);
    }
    printf("\n\n");

    locacoesGratuitas(locacoes, gratuitas);

    for(int i = 0; i < 500; i++){
        printf("\nO cliente[%d] retirou %d filmes", i, locacoes[i]);
    }

}

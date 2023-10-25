/*8. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele 
pode ou não se  aposentar. As condições para aposentadoria são: • Ter pelo menos 65 anos; 
• Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

#include <stdio.h>

int main(){

    int idade, tempoTrabalhado;

    printf("digite sua idade:\n");
    scanf("%d", &idade);
    printf("digite o tempo trabalhado:\n");
    scanf("%d", &tempoTrabalhado);

    if((idade == 65) || (tempoTrabalhado >= 30) || (idade >= 60 && tempoTrabalhado >= 25)){
        printf("voce ja pode se aposentar");
    } else {
        printf("voce ainda nao pode se aposentar");
    }

    return 0;
}

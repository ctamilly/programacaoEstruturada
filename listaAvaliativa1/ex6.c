/*6. Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano.
A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na 
origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos 
eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. */

#include <stdio.h>
#include <math.h>

int main(){
    float x, y;

    printf("\nDigite um valor para x: ");
    scanf("%f", &x);

    printf("\nDigite um valor para y: ");
    scanf("%f", &y);

    if(x == 0 && y == 0){
        printf("\nOrigem");
    } else if(x == 0){
        printf("\nEixo y");
    }else if(y == 0){
        printf("\nEixo x");
    }else if(x > 0 && y > 0){
        printf("\nQuadrante 1");
    }else if(x < 0 && y > 0){
        printf("\n Quadrante 2");
    }else if(x < 0 && y < 0){
        printf("\nQuadrante 3");
    }else{
        printf("\nQuadrante 4");
    }

    return 0;
}

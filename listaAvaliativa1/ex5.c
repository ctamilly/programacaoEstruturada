/*5. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) 
e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: */

#include <stdio.h>
#include <math.h>

int main(){

    float x1, y1, x2, y2;

    printf("\nDigite as coodernadas de P1 (x1, y1): ");
    scanf("%f %f", &x1, &x2);
    fflush stdin;

    printf("\nDigite as coodernadas de P2 (x2, y2): ");
    scanf("%f %f", &x2, &x2);

    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


    printf("\n A distancia entre os pontos P1 e P2 eh %.4f", distancia);

    
    return 0;

}

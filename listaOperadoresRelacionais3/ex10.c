/*10. Calcule as raízes da equação de 2º grau. Lembrando que:
A varável a tem que ser diferente de zero. Caso seja igual, 
imprima a mensagem “Não e equação de segundo grau”. 

• Se ∆ < 0, não existe real. Imprima a mensagem: Não existe raiz. 

• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  única.

• Se ∆ ≥ 0, imprima as duas raízes reais. 
*/

#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, x1, x2;    

    printf("Digite os valor de a: ");
    scanf("%f", &a);

    printf("Digite os valor de b: ");
    scanf("%f", &b);

    printf("Digite os valor de c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    x1 = (- b + sqrt(delta)) / 2 * a;

    x2 = (- b - sqrt(delta)) / 2 * a;

    if (a == 0) {
        printf("Nao eh equacao de 2 grau.");

    }
    
    if (delta < 0) {
        printf("\n Nao existe raiz.");

    }else if (delta == 0){
        x1 = - b / 2 * a;
        printf("\n Raiz unica: %.2f", x1);

    }else if (delta >= 0){
        printf("\nRaiz real 1: %.2f", x1);
        printf("\nRaiz real 2: %.2f", x2);
    }

    return 0;  
}

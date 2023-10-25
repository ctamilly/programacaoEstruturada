//4. Leia o peso e imprima se é menor que 60kg

#include <stdio.h>

int main(){

    float peso, pesoRef = 60.0;

    printf("digite a seu peso\n");
    scanf("%f", &peso);

    if(peso < pesoRef) {
        printf("seu peso eh menor que 60kg.\n");
    }else{
        printf("seu peso eh igual ou maior que 60kg.\n");
    }
  
  return 0;
}

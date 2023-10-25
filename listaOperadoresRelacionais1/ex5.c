//5. recebe a media nota >= 7 aprovado / nota ente 4 e 6.99 recuperação / nota < 4 reprovado

#include <stdio.h> 

int main() {
    float nota;

    printf("digite a sua nota: ");
    scanf("%f", &nota);

    if(nota >= 7){
        printf("aprovado");
    }else if(nota < 7 && nota >= 4){
        printf("recuperacao");
    }else if(nota < 4){
        printf("reprovado");
    }
  return 0;
}

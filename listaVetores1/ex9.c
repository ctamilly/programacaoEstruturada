#include <stdio.h>

int main(){
    int valores[6], num;

    for(int i = 0; i < 6; i++){
        do{
            printf("Digite o numero par: ");
            scanf("%d", &num);
            if(num % 2 == 0){
                valores[i] = num;
            }else{
                printf("\nErro - Digite apenas valores pares.")
            }
        }while(num % 2 != 0);
    }

    for(int i = 0; i < 6; i--){
        printf("\n%d\t%p", valores[i]);
    }

    return 0;
}

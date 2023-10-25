/*7. Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10
Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem 
"Reprovado", caso contrário. Ao final, mostre a média geral.*/

#include <stdio.h>

int main(){
    
    float nota1, nota2, nota3, mediaPonderada, mediaGeral;

    int numAlunos = 30, contador = 0;


    while(contador < numAlunos){

        printf("\n\n---------------------------------------------");
        printf("\nDigite a primeira nota: ", contador + 1);
        scanf("%f", &nota1);

        printf("\nDigite a segunda nota: ", contador + 1);
        scanf("%f", &nota2);

        printf("\nDigite a terceira nota: ", contador + 1);
        scanf("%f", &nota3);

        mediaPonderada = ( nota1*2 + nota2*4 + nota3*3 ) / 10;

        mediaGeral += mediaPonderada;

        printf("\n--> A media do aluno %d eh: %.2f ", contador + 1, mediaPonderada);

        if(mediaPonderada >= 7){
            printf("\n\n -> Aluno APROVADO!");
        }else {
            printf("\n\n -> Aluno REPROVADO!\n");
        }

        contador ++;
 
    }

    mediaGeral /= numAlunos;

    printf("\n\n ----> A media geral dos alunos foi %.2f: ", mediaGeral);

    
    return 0;

}

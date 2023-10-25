/*7. Faça um algoritmo que calcule a media ponderada das notas de 3 provas. 
A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, 
mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. 
A nota para aprovação deve ser igual ou  superior a 7.0 pontos. */

#include <stdio.h> 

int main() {

    float nota1, nota2, nota3, media;

    printf("digite a nota da prova 1:\n");
    scanf("%f", &nota1);
    printf("digite a nota da prova 2:\n");
    scanf("%f", &nota2);
    printf("digite a nota da prova 3:\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + (nota3 * 2)) / 4;

    if(media >= 7.0){
        printf("\nAluno aprovado, media: %.2f", media);
    }else {
        printf("\nAluno reprovado, media: %.2f", media);
    }

    return 0;
}

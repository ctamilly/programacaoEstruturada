/*7. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade 
dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.*/

#include <stdio.h>

int main() {

    int idadeAno, idadeMes, idadeDias, diasAno, diasMes, idadeTotalEmDias;

    printf("Digite a sua idade considerando anos, meses e dias: \n");
    printf("Ano: \n");
    scanf("%d", &idadeAno);
    printf("Meses: \n");
    scanf("%d", &idadeMes);
    printf("Dias: \n");
    scanf("%d", &idadeDias);
  
    diasAno = 365;
    diasMes = 30;

    idadeTotalEmDias = (idadeAno * diasAno) + (idadeMes * diasMes) + (idadeDias);

    printf("Sua idade em dias eh: %d", idadeTotalEmDias);

    return 0;

}

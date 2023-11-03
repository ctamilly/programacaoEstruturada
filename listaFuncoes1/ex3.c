/*3. Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:

a linha 2 com a linha 8;
a coluna 4 com a coluna 10;
a diagonal principal com a secundária;
a linha 5 com a coluna 10;
O procedimento deve retornar a matriz alterada.*/

#include <stdio.h>
#include <stdlib.h>

void imprimir(int matriz[10][10]){
     for(int i = 0; i < 10; i++){
        for(int j = 0; j <10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

//trocar linha 2 pela linha 8
void trocarLinha2Linha8(int matriz[10][10]){
    int aux;
    for(int i = 0; i < 10; i++){
        aux = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = aux;

    }
}

//trocar a coluna 4 pela coluna 10
void trocarColuna4Coluna10(int matriz[10][10]){
    int aux;
    for(int i = 0; i < 10; i++){
        aux = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = aux;

    }
}

//a diagonal principal com a secundária;
void trocarDiagonal(int matriz[10][10]){
    int aux;
    for(int i = 0; i < 10; i++){
        aux = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = aux;

    }
}

//trocar a linha 5 com a coluna 10;
void trocarLinha5Coluna10(int matriz[10][10]){
    int aux;
    for(int i = 0; i < 10; i++){
        aux = matriz[4][i];
        matriz[4][i] = matriz[i][10];
        matriz[i][10] = aux;

    }
}

int main(){
    int matriz[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j <10; j++){        
            matriz[i][j] = i * 10 + j;
        }
        printf("\n");
    }

//impressao matriz original
    imprimir(matriz);

//trocarLinha2Linha8
    trocarLinha2Linha8(matriz);
    printf("\n");
    imprimir(matriz);

//trocarColuna4Coluna10
    trocarColuna4Coluna10(matriz);
    printf("\n");
    imprimir(matriz);

//trocar a diagonal principal com a secundária;
    trocardiagonal(matriz);
    printf("\n");
    imprimir(matriz);

//trocarLinha5Coluna10
    trocarLinha5Coluna10(matriz);
    printf("\n");
    imprimir(matriz);
}

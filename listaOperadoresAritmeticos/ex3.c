/*3.Dadas as medidas de uma sala, informe sua área.*/

    #include <stdio.h>

    int main() {

    float areaSala, largura, comprimento;

    printf("\nDigite a largura da sala: ");
    scanf("%f", &largura);

    printf("\nDigite o comp da sala: ");
    scanf("%f", &comprimento);

    areaSala = largura * comprimento;

    printf("A area da sala eh: %.2f", areaSala);

    return 0;

}

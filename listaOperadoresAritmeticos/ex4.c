/*4. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.*/

#include <stdio.h>

int main() {

    float valorReal, valorDolar, precoDolar;

    printf("Digite o valor em reais que deseja converter: \nR$ ");
    scanf("%f", &valorReal);

    precoDolar = (4.98);
    valorDolar = valorReal / precoDolar;

    printf("O valor em real convertido em dolar eh: $ %.2f", valorDolar);

    return 0;

}

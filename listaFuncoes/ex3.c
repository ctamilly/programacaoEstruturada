/*3. Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0),
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

float converteEmCelsius(float tempF);

int main(){

    float f, temp;

    printf("\nDigite a temperatura em Fahrenheit para conversao em Celsius: ");
    scanf("%f", &f);

    temp = converteEmCelsius(f);

    printf("\nA temperatura em graus Celsius eh: %.2f", temp);

}

float converteEmCelsius(float tempF){
    float celsius;

    celsius = (tempF - 32.0) * (5.0 / 9.0);

    return celsius;    
    
}

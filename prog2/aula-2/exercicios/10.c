/*Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5, na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius;*/

#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    float celsius, fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf ("%f", &celsius);
    fahrenheit = (9 * celsius + 160) / 5;
    printf("A temperatura %.1f°C é equivalente a %.1f°F", celsius, fahrenheit);
    return 0;
}
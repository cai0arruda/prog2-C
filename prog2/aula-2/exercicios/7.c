/*Escreva um programa para calcular a área de uma circunferência, considerando a fórmula ÁREA = π * RAIO² . Utilize as variáveis AREA e RAIO, a constante π (pi = 3,14159) e os operadores aritméticos de multiplicação.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    float raio, area;
    const float pi = 3.14159;
    printf("Digite o valor do raio da circunferência: ");
    scanf("%f", &raio);
    area = pi * (raio * raio);
    printf("A área da cirunferência de raio %.2fcm é %2.fcm²", raio, area);
    return 0;
}
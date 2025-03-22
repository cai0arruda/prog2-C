/*Desenvolva um programa em C que calcule a área de um triângulo. Utilize as variáveis AREA, BASE e ALTURA e os operadores aritméticos de multiplicação e divisão.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    float base;
    float altura;
    float area;
    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triângulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("A área do triângulo de base %.2fcm e altura %2.fcm é %2.fcm²", base, altura, area);
    return 0;
}
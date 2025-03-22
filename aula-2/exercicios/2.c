/*Faça um programa que converta metros para centímetros. Lembrando que 1m = 100cm*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    float metros;
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    float centimetros = metros * 100;
    printf("%.2f metros é igual a %.2f centímetros\n", metros, centimetros);
    return 0;
}
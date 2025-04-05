/*As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra.*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void calculaMacas(){
    int quantidadeMacas;
    printf("Digite a quantidade de maças compradas: ");
    scanf("%d", &quantidadeMacas);
    float custoTotal;
    if (quantidadeMacas < 6)
        custoTotal = quantidadeMacas * 1.30;
    else
        custoTotal = quantidadeMacas * 1.00;
    printf("O valor total das maças é R$%.2f.", custoTotal);
}

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    calculaMacas();
    return 0;
}
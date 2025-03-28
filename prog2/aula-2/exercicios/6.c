/*Escreva um programa para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    float salario, percentualReajuste, novoSalario;
    printf("Digite o salário mensal atual: ");
    scanf("%f", &salario);
    printf("Digite o valor do percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    novoSalario = salario + (salario * percentualReajuste / 100);
    printf("O novo salário com o reajuste de %.2f%% será R$ %.2f", percentualReajuste, novoSalario);
    return 0;
}
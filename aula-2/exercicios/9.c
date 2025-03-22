/*Faça um programa que: leia um número inteiro; leia um segundo número inteiro; efetue a adição dos dois valores; apresente o valor calculado.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int numero1;
    int numero2;
    int soma;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);
    soma = numero1 + numero2;
    printf("A somo dos números %d e %d é %d\n", numero1, numero2, soma);
    return 0;
}
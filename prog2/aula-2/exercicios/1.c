/*Escreva um programa para ler um valor (do teclado) e escrever (na tela) o seu antecessor.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("O antecessor do número %d é %d\n", numero, numero-1);
    return 0;
}
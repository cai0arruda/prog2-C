/*Faça um programa que leia um nome e imprima as 4 primeiras letras do nome*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    char nome[50];
    printf("Digite seu nome: ");
    gets(nome);
    // scanf("%s", nome); // lê uma string sem espaços
    // Copiando os 4 primeiros caracteres da string nome para a string nome
    char nome4letras[5];
    for (int i = 0; i < 4; i++){
        nome4letras[i] = nome[i];
    }
    nome4letras[4] = '\0'; // adiciona o caractere nulo no final da string
    printf("\nAs 4 primeiras letras do seu nome são: %s", nome4letras);
    printf("\nO nome completo é: %s", nome);
    return 0;
}
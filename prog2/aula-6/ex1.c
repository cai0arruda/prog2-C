#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    system("cls");
    SetConsoleOutputCP(65001);
    char letras[50];
    char palavra[10] = {'p', 'a', 'l', 'a', 'v', 'r', 'a'};
    char nome[] = "Caio Arruda";
    char frase[] = "Hoje é sexta feira";
    // mostrando uma string na tela
    printf("\no nome é %s \n", nome);
    printf("\na frase é %s \n", frase);
    // lendo uma string
    printf("Qual o seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é %s", nome);
    
}
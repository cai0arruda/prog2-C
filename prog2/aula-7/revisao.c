#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    // Lembrar de declarar uma posição a mais para o caractere nulo '\0'
    // O caractere nulo é o que indica o fim da string
    char nomeCompleto[50];
    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin); // lê uma string completa, até o limite de 50 caracteres
    printf("\nBem vindo %s", nomeCompleto);
    int t=0;
    for(; nomeCompleto[t]!= '\0'; t++); // conta o número de caracteres da string
    // \0 significa o fim da string
    printf("A string %s tem %d caracteres", nomeCompleto, t);
    return 0;
}
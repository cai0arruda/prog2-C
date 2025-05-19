/*Crie um programa que calcula o comprimento de uma string*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    char frase[50];
    int i = 0;
    printf("Digite uma frase: ");
    gets(frase); // lê uma string com espaços
    // scanf("%s", frase); // lê uma string sem espaços
    while (frase[i] != '\0'){
        i++;
    }
    // \0 significa o fim da string
    // i é o comprimento da string
    printf("\nA frase digitada foi: %s", frase);
    printf("\nO comprimento da string é: %d", i);
    return 0;
}
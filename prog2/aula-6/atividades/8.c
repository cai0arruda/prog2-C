/*Faça um programa que leia uma palavra e a imprima ao contrário*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    char palavra[50];
    int i = 0, j = 0;
    printf("Digite uma palavra: ");
    gets(palavra); // lê uma string com espaços
    // scanf("%s", palavra); // lê uma string sem espaços
    while (palavra[i] != '\0'){
        i++;
    }
    // \0 significa o fim da string
    // i é o comprimento da string
    printf("\nA palavra digitada foi: %s", palavra);
    printf("\nA palavra ao contrário é: ");
    for (j = i - 1; j >= 0; j--){
        printf("%c", palavra[j]);
    }
    return 0;
}
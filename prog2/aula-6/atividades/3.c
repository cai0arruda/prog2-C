/*Declare duas strings com capacidade para 20 caracteres. Leia pela entrada padrão a primeira string. Em seguida, copie o texto da primeira string para a segunda.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    char str1[20], str2[20];
    printf("Digite a primeira string contendo 20 caracteres: ");
    gets(str1); // lê uma string com espaços
    // scanf("%s", str1); // lê uma string sem espaços
    // Copiando a string 1 para a string 2
    for (int i = 0; str1[i] != '\0'; i++){
        str2[i] = str1[i];
    }
    printf("\nA primeira string é: %s", str1);
    printf("\nA segunda string, que foi copiada da primeira, é: %s", str2);
    return 0;
}
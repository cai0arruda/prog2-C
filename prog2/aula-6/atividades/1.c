/*Faça um programa que então leia uma string e a imprima.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    char frase[] = "Hello world";
    printf("\n%s\n", frase);
    printf("Digite uma palavra comovente abaixo: \n");
    scanf("\n%s", frase);
    printf("Sua frase comovente é %s", frase);
    return 0;
}
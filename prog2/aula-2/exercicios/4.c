/*Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int anos, meses, dias;
    printf("Digite os anos da pessoa: ");
    scanf("%d", &anos);
    printf("Digite os meses da pessoa: ");
    scanf("%d", &meses);
    printf("Digite os dias da pessoa: ");
    scanf("%d", &dias);
    int idadeDias = anos * 365 + meses * 30 + dias;
    printf("A idade da pessoa em dias é %d\n", idadeDias);
    return 0;
}
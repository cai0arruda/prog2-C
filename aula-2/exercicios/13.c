/*Faça um programa que leia dois valores para as variáveis A e B e efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresente os valores trocados.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int A, B, C;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    C = A;
    A = B;
    B = C;
    printf("Agora, A = %d e B = %d", A, B);
    return 0;
}
/*Escreva um programa para ler um valor entre 1 (inclusive) e 10 (inclusive). Se o valor lido não estiver entre 1 (inclusive) e 10 (inclusive), deve ser lido um novo valor. Após a leitura do valor, escrever o valor lido na tela.*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int numero;
    do{
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &numero);
    } while(numero<1 || numero>10);
    printf("O valor lido foi: %d\n", numero);
    return 0;
}
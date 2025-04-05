/*Faça um programa para escrever de 1 a 10 na tela, utilizando a estrutura ENQUANTO e um CONTADOR.*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    //Declarando variáveis
    int i=1;
    //Estrutura de repetição ENQUANTO
    while(i<=10){
        printf("%d\n", i);
        i++;
    }
    return 0;
}
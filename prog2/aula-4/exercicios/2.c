/*Escreva um programa que leia 10 valores e conte quantos deles estão no intervalo entre 10 e 20. Depois escreva essa informação*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    //Declarando variáveis
    int i=1, valor, cont=0;
    //Estrutura de repetição ENQUANTO
    while(i<=10){
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);
        if(valor>=10 && valor<=20){
            cont++;
        }
        i++;
    }
    printf("A quantidade de valores entre 10 e 20 é: %d\n", cont);
    return 0;
}
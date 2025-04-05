/*Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu)*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    printf("Digite o ano atual: ");
    int anoAtual;
    scanf("%d", &anoAtual);
    printf("Digite o ano de nascimento da pessoa: ");
    int anoNascimento;
    scanf("%d", &anoNascimento);
    int idade;
    idade = anoAtual - anoNascimento;
    printf("A idade da pessoa é %d anos.\n", idade);
    if (idade < 16)
        printf("Só é permitido votar com 16 anos ou mais!");
    else
        printf("Nessa idade já é permitido votar!");
    return 0;
}
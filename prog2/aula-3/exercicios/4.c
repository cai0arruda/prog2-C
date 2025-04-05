/*Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    printf("Digite um valor para A: ");
    int a;
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    int b;
    scanf("%d", &b);
    if (b == a)
        printf("O valor digitado para B é igual ao valor digitado para A!");
    else if (a > b)
        printf("VALORES ORDENADOS EM ORDEM CRESCENTE - [%d] [%d]", b, a);
    else
    printf("VALORES ORDENADOS EM ORDEM CRESCENTE - [%d] [%d]", a, b);
    return 0;
}
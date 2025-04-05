/*Ler dois valores (considere que não serão lidos valores iguais) e escrever o maior deles.*/
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
        printf("A = %d é maior que B = %d", a, b);
    else
        printf("B = %d é maior que A = %d", b, a);
    return 0;
}
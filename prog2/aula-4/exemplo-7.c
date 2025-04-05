#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    // Ler dois números do teclado e mostrar os números que existem entre eles (USANDO FOR)
    int a;
    int b;
    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);
    a++;
    for(a; a<b;){
        printf("[%d]",a);
        a++;
    }
    return 0;
}
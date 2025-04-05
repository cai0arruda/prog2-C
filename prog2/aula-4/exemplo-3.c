#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    // Ler dois números do teclado e mostrar os números que existem entre eles
    int a;
    int b;
    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);
    int cont = a + 1;
    if(a < b){
        printf("NÚMEROS QUE EXISTEM ENTRE %d e %d\n", a, b);
        while(cont<b){
            printf("[%d] ", cont);
            cont++;
        }
    }
    else{
        printf("O valor de B - %d deve ser maior que o valor de A - %d", b, a);
    }
    return 0;
}
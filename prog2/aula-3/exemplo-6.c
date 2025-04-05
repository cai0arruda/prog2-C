#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor==0)
        printf("O valor é igual a 0!\n");
    else if (valor>0)
        printf("O valor %d é maior que 0!\n", valor);
    else
        printf("O valor %d é menor que 0!\n", valor);
    
    return 0;
}
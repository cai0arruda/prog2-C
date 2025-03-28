/*Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int num1, num2, divisao;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    while (num2 == 0){
        printf("O segundo numero nao pode ser zero. Digite outro valor: ");
        scanf("%d", &num2);
    }
    divisao = num1 / num2;
    printf("A divisao de %d por %d é igual a %d", num1, num2, divisao);
    return 0;
}
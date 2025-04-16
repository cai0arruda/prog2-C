#include <stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int quant;
    printf("Qual a quantidade de produtos em estoque? ");
    scanf("%d", &quant);
    //processo de contagem
    float soma = 0;
    for(int i=0; i<quant; i++){
        float preco;
        printf("Qual o preço do produto %d? ", i+1);
        scanf("%f", &preco);
        soma += preco;
    }
    float media = soma / quant;
    printf("O valor total dos produtos é: %.2f\n", soma);
    printf("A média dos produtos é: %.2f\n", media);
}
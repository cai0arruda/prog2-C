#include <stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int quant;
    float soma;
    quant = 0;
    char resposta;
    resposta = 's';
    //processo de contagem
    do {
        float preco;
        printf("Qual o preço do produto %d? ", quant+1);
        scanf("%f", &preco);
        quant++;
        soma += preco;
        setbuf(stdin,NULL);
        printf("Deseja continuar? (s/n) ");
        scanf(" %c", &resposta);
    } while(resposta == 's' || resposta == 'S');
    float media = soma / quant;
    printf("O valor total dos produtos é: %.2f\n", soma);
    printf("A média dos produtos é: %.2f\n", media);
    return 0;
}
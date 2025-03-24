/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    float custoFabrica, custoConsumidor;
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);
    custoConsumidor = custoFabrica + custoFabrica * 0.28 + custoFabrica * 0.45;
    printf("O custo final ao consumidor é de R$ %.2f", custoConsumidor);
    return 0;
}
/*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int carrosVendidos;
    float valorVendas, salarioFixo, valorPorCarro, salarioFinal;
    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor que ele recebe por carro vendido: ");
    scanf("%f", &valorPorCarro);
    valorVendas = carrosVendidos * valorPorCarro;
    salarioFinal = salarioFixo + valorVendas + valorVendas * 0.05;
    printf("O salário final do vendedor é de R$ %.2f", salarioFinal);
    return 0;
}
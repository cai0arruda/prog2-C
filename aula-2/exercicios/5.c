/*Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um programa para ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    float precoLitro, valorPagar, litrosAbastecidos;
    printf("Digite o preço que se encontra o combustível: ");
    scanf("%f", &precoLitro);
    printf("Digite quantos reias deseja abastecer: ");
    scanf("%f", &valorPagar);
    litrosAbastecidos = valorPagar / precoLitro;
    printf("Foi possível abastecer %.2f litros6, com R$ %.2f", litrosAbastecidos, valorPagar);
    return 0;
}
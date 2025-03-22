/*Escreva um programa para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.*/
#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int totalEleitores, votosBrancos, votosNulos, votosValidos;
    printf("Digite o número total de eleitores: ");
    scanf("%d", &totalEleitores);
    printf("Digite o número de votos brancos: ");
    scanf("%d", &votosBrancos);
    printf("Digite o [umero de votos nulos: ");
    scanf("%d", &votosNulos);
    printf("Digite o número de votos válidos: ");
    scanf("%d", &votosValidos);
    float percentualBrancos = (float)votosBrancos / totalEleitores * 100;
    float percentualNulos = (float)votosNulos / totalEleitores * 100;
    float percentualValidos = (float)votosValidos / totalEleitores * 100;
    printf("O percentual de votos brancos é %.2f%%, de votos nulos é %.2f%% e de votos válidos é %.2f%%\n", percentualBrancos, percentualNulos, percentualValidos);
    return 0;
}
/*Faça um programa que deverá permitir que o usuário entre com os valores dos elementos de uma matriz quadrada de ordem 4 e possibilite o usuário realizar as seguintes funcionalidades: 
a) Imprimir todos os elementos da matriz; 
b) Somar os quadrados de todos os elementos da primeira coluna; 
c) Somar todos os elementos da terceira linha; 
d) Somar os elementos da diagonal principal; e 
e) Somar todos os elementos de índice par da segunda linha. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int matriz[4][4], i, j, somaColuna1 = 0, somaLinha3 = 0, somaDiagonalPrincipal = 0, somaLinha2Par = 0;
    
    // preenchendo a matriz
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor para a matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // exibindo a matriz
    printf("\nMatriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("[%d / %d - %d] ", i, j, matriz[i][j]);
        }
        printf("\n");
    }
    
    // somando os quadrados da primeira coluna
    for(i = 0; i < 4; i++){
        somaColuna1 += matriz[i][0] * matriz[i][0];
    }
    
    // somando os elementos da terceira linha
    for(j = 0; j < 4; j++){
        somaLinha3 += matriz[2][j];
    }
    
    // somando os elementos da diagonal principal
    for(i = 0; i < 4; i++){
        somaDiagonalPrincipal += matriz[i][i];
    }
    
    // somando os elementos de índice par da segunda linha
    for(j = 0; j < 4; j+=2){
        somaLinha2Par += matriz[1][j];
    }
    
    // exibindo os resultados
    printf("\nSoma dos quadrados da primeira coluna: %d\n", somaColuna1);
    printf("Soma dos elementos da terceira linha: %d\n", somaLinha3);
    printf("Soma dos elementos da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma dos elementos de índice par da segunda linha: %d\n", somaLinha2Par);

    return 0;
}
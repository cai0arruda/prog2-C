/*Carregar uma matriz SOMA 4x4, calcular e escrever as seguintes somas: 
a) da linha de índice 3 
b) da coluna de índice 2 
c) de todos os elementos da matriz  
*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    system("cls");
    int matriz[4][4];
    int i, j, somaLinha3 = 0, somaColuna2 = 0, somaTotal = 0;
    // Preenchendo a matriz
    for(i = 0; i <4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor para a matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    // Exibindo a matriz
    printf("Matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    // Calculando a soma da linha de índice 3
    for(j = 0; j < 4; j++){
        somaLinha3 += matriz[3][j];
    }
    // Calculando a soma da coluna de índice 2
    for(i = 0; i < 4; i++){
        somaColuna2 += matriz[i][2];
    }
    // Calculando a soma de todos os elementos da matriz
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            somaTotal += matriz[i][j];
        }
    }
    // Exibindo os resultados
    printf("Soma da linha de índice 3: %d\n", somaLinha3);
    printf("Soma da coluna de índice 2: %d\n", somaColuna2);
    printf("Soma de todos os elementos da matriz: %d\n", somaTotal);
    return 0;
}